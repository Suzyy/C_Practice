#include <stdio.h>
void sortArry(double voronoi[], int nVilge, double temp, int n1, int n2);
void getNeighSize(double voronoi[], int nVilge, double* sNeigh);















void sortArry(double voronoi[], int nVilge, double temp, int n1, int n2){
  for(int i = 0; i < nVilge-n1; i++)
  {
    for(int j = i +1; j < nVilge-n2; j++)
    {
      if(voronoi[i] > voronoi[j])
      {
        temp = voronoi[i];
        voronoi[i] = voronoi[j];
        voronoi[j] = temp;
      }
    }
  }
}

void getNeighSize(double voronoi[], int nVilge, double* sNeigh){
  double left = 0;
  double right = 0;
  *sNeigh = voronoi[nVilge-1];
  double tempS=0;
  int isFirstTime = 1; // true

  for(int j = 1; j < nVilge-1; j++)
  {
    left = (voronoi[j] - voronoi[j-1])/2;
    right = (voronoi[j+1] - voronoi[j])/2;

    tempS = left + right;
  
    if( isFirstTime || tempS < *sNeigh){
      *sNeigh = tempS;
      isFirstTime = 0; // false
    }
    //printf(" (%.1lf, %.1lf)", left, right);
  }
}


void debugArry1(double voronoi[], int nVilge){
  printf("array =");
  for(int i = 0; i < nVilge; i++)
  {
    printf(" %.1lf", voronoi[i]);
  }
}

int main()
{
  FILE * fp = fopen("voronoiA.txt", "r");

  int nVilge = 0;

  fscanf(fp, "%d", &nVilge);

  double voronoi[nVilge];
  int crrVilge = 0;
  double temp = 0;
  double sNeigh;

  for(int i = 0; i < nVilge; i++)
  {
    fscanf(fp, "%d", &crrVilge);
    voronoi[i] = crrVilge;
  }

  sortArry(voronoi, nVilge, temp, 1, 0);

  //debugArry1(voronoi, nVilge);
  //printf("\n");

  getNeighSize(voronoi, nVilge, &sNeigh);

  //printf("\n");
  printf("%.1lf\n", sNeigh);

  return 0 ;
}

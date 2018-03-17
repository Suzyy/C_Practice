/*
* C version of 2018 CCC Senior Problem 1 Solution
*
* Using gcc version: 4.2.1
*
*/


#include <stdio.h>


int main()
{
  FILE * fp = fopen("voronoiA.txt", "r");

  int nVilge = 0;

  fscanf(fp, "%d", &nVilge);

  double voronoi[nVilge];
  double neighUnits[nVilge-2];
  int crrVilge = 0;
  double temp = 0;

  for(int i = 0; i < nVilge; i++)
  {
    fscanf(fp, "%d", &crrVilge);
    voronoi[i] = crrVilge;
  }

  for(int i = 0; i < nVilge-1; i++)
  {
    for(int j = i +1; j < nVilge; j++)
    {
      if(voronoi[i] > voronoi[j])
      {
        temp = voronoi[i];
        voronoi[i] = voronoi[j];
        voronoi[j] = temp;
      }
    }
  }

  /*
  printf("array1 =");
  for(int i = 0; i < nVilge; i++)
  {
    printf(" %.0lf", voronoi[i]);
  }
  printf("\n");
  */

  double left = 0;
  double right = 0;
  double c = 0;

  for(int i = 0, j = 1; (i < nVilge-2) && (j < nVilge-1); i++, j++)
  {
    left = (voronoi[j] - voronoi[j-1])/2;
    right = (voronoi[j+1] - voronoi[j])/2;
    neighUnits[i] = (left + right);
    //printf(" (%.1lf, %.1lf)", left, right);
    //printf("%.1lf", neighUnits[i]);
  }

  for(int i = 0; i < nVilge-3; i++)
  {
    for(int j = i+1; j < nVilge-2; j++)
    {
      if(neighUnits[i] > neighUnits[j])
      {
        temp = neighUnits[i];
        neighUnits[i] = neighUnits[j];
        neighUnits[j] = temp;
      }
    }
  }

  /*
  for(int i = 0; i < nVilge-2; i++)
  {
    printf(" %.1lf", neighUnits[i]);
  }
  */

  //printf("\n");
  printf("%.1lf\n", neighUnits[0]);

  return 0 ;
}

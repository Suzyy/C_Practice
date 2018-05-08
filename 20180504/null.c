#include <stdio.h>
int _mystrlen3(char string[], int crr);

void mystrlen(char string[], int* size){
  *size = 0;
  for(int i = 0; ; i++){
    //*size = *size +1;
    (*size)++;
    if(string[i] == '\0'){
      break;
    }
  }
}

int mystrlen2(char string[]){
  int i;
  for(i = 0; string[i] != '\0' ; i++){
    //*size = *size +1;
  }
  return i;
}

int mystrlen3(char string[]){
  return _mystrlen3(string, 0);
}

int mystrlen4(char string[]){

  //....
}

int _mystrlen3(char string[], int crr){
  //printf("crr: %d,%d\n", crr, string[crr]);
  if(string[crr] == '\0'){
    return 0;
  }
  
  return 1 + _mystrlen3(string, crr+1);
}

int mytoupper(char a){
  if(a >= 'a' && a <= 'z'){
    return a + ('A' - 'a');
  }
  else{
    return a;
  }
}

void strtoupper(char string[]){
  for(int i = 0; i < mystrlen2(string) ; i++){
    string[i] = mytoupper(string[i]);
  }
}

int main(){
  char hi[100] = "hi";
  
  /**
  char hi2[3] = "hi";
  char hi3[] = "hi";
  int size = 0;

  //mystrlen(hi, &size);
  size = mystrlen2(hi);
  printf("%d\n", size);

  for(int i = 0; i<size; i++){
    printf("%c", hi[i]);
  }
  printf("\n");
  **/
  /**
  printf("%c\n", mytoupper('a'));
  strtoupper(hi);
  printf("%s\n", hi);
  **/
  printf("%d\n" ,mystrlen3(hi));

  return 0;
}
  
  

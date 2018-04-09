#include <stdio.h>

int main(){
  
  char c = 0;
  int num[1000];
  int nth = 0;

  c = getchar();
  while(c != '\n'){
    //if num,save in array
    if('0' <= c && c <= '9'){
      num[nth] = c;   
      nth++;
    }
      
    //if not num
    else{
      //if nothing, dont do anything
      if(nth == 0){}
      //if array if full, print
      else{
        printf("number: ");
        for(int i = 0; i < nth; i++){
          printf("%c",num[i]);
        }
        printf(" is found\n");
        nth = 0;
      }

      //print char
      printf("Non number: [%c] is found\n", c);
    }
    c = getchar();
  }

  //if nothing, dont do anything
  if(nth == 0){}
  //if array if full, print
  else{
    printf("number: ");
    for(int i = 0; i < nth; i++){
      printf("%c",num[i]);
    }
    printf(" is found\n");
    nth = 0;
  }

  //print char
  printf("Non number: [%c] is found\n", c);


  return 0;
}

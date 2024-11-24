#include <stdio.h>
 void main(){
  int x = 33;
  {
    int x = 10;
    printf("%d",x);
    printf("\n");
  }

  {
    int x = 50;
  }

   x = 100;

  printf("outerside %d",x);
  
}

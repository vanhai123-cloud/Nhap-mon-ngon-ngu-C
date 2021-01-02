#include<stdio.h>

int main(){
  int i,j;
  for( i = 1; i <= 10; ++i)
  {
    for( j = 2; j <= 9; ++j){
      printf("%d * %d = %d ",j ,i, j*i);
    }
    printf("%d \n");
  }
  return 0;
}

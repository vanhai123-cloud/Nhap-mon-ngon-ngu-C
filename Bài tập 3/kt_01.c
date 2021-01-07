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
#include<stdio.h>

int main(){
	printf("--------BANG CUU CHUONG--------\n");
	int n;
	n = 2;
	printf("bang 2\n");
	printf(" 2*1 = %d\n 2*2 = %d\n 2*3 = %d\n 2*4 = %d\n",n*1,n*2,n*3,n*4);
	n = 3;
	printf("bang 3");
	printf(" \n 3*1 = %d\n 3*2 = %d\n 3*3 = %d\n 3*4 = %d\n",n*1,n*2,n*3,n*4);
	n = 4;
	printf("bang 4");
	printf(" \n 4*1 = %d\n 4*2 = %d\n 4*3 = %d\n 4*4 = %d\n",n*1,n*2,n*3,n*4);
	return 0;
}

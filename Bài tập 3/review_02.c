#include<stdio.h>

int main(){
  int a, b;//khai bao bien
  printf("\nnhap a = ");
  scanf("%d", & a);
  printf("\nnhap b = ");
  scanf("%d", &b);
  int n ;
  for( n = a; n <= b; n++){
    switch(n){
      case 1:
        printf("one\n ");break;
      case 2:
        printf("two\n ");break;
      case 3:
        printf("three\n ");break;
      case 4:
        printf("four\n ");break;
      case 5:
        printf("five\n ");break;
      case 6:
        printf("six\n ");break;
      case 7:
        printf("seven\n ");break;
      case 8:
        printf("eight\n ");break;
      case 9:
        printf("nine\n ");break;
      }
    
      if( n > 9 &&n % 2 == 0){
        printf("even\n ");
      }else if ( n > 9 && n%2==1){
        printf("old\n ");
      }
  }
  return 0;
}

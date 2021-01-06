#include<stdio.h>

int main(){
  float a, b;
  printf("nhap a =");
  scanf("%f", &a);
  printf("nhap b = ");
  scanf("%f", &b);
  if( a * b > 0){
    printf("%0.1f va %0.1f cung dau",a,b);
  }else{
    printf("%0.1f va %0.1f khac dau",a,b);
  }
  return 0;
}

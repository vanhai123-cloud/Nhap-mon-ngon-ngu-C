#include <stdio.h>

int main(void) {
  float a, b, c;
  printf("nhap 3 canh:  ");
  scanf("%f%f%f", &a, &b, &c);
  if( a > 0 && b > 0 && c > 0){
    if( a < b + c && b < a + c && c < b+ a){
      printf("ba so lap thanh mot tam giac");
    }else{
      printf("ba so khong lap thanh mot tam giac");
    }
  }else{
    printf("nhap vao 3 so duong");
  }
  return 0;
}

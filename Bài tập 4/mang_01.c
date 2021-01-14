#include <stdio.h>

int main(void) {
  int a [4];//khai bao mang
  a[0] = 3;
  a[1] = 5;
  a[2] = 7;
  a[3] = 2;
  for( int i = 0;i < 4; i++){
    printf("%d\n", a[i]);//hien thi day
  }
  int tong = 0;
  for(int i = 0; i < 4; i++){
    tong = tong + a[i];
  }printf("tong = %d",tong);//hien thi tong
  return 0;
}

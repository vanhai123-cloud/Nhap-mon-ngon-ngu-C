#include <stdio.h>

int main () {
  int mang[4];
  //mảng bắt đầu từ 0 và kết thúc ở bé hơn 4 
  printf("nhap 4 so n tu ban phim: ");
  //hiển thị nhap 4 so tu ban phim ra màn hình
  for (int i = 0; i < 4; i++) {
  //vong lặp bắt đầu từ 0 và bé hơn 4 theo mang[4]
    scanf("%d", &mang[i]);
    //nhập số của mảng từ bàn phím
  }
  for (int i = 0; i < 4; i++) {
  //lặp lại vòng lặp i
    printf("%d ", mang[i]);
    //xuất các giá trị có trong mảng ra màn hình 
  }
  return  0;
}

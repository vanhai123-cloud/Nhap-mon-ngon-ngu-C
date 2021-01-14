#include <stdio.h>

int main () {
  int a[100];
  int n;
  printf ("nhap kich thuoc mang: ");
  scanf ("%d", &n);
  //mảng bắt đầu từ 0 và kết thúc ở bé hơn 4 
  printf("nhap 4 so a tu ban phim: ");
  //hiển thị nhap 4 so tu ban phim ra màn hình
  for (int i = 0; i < n; i++) {
  //vong lặp bắt đầu từ 0 và bé hơn 4 theo mang[4]
    scanf("%d", &a[i]);
    //nhập số của mảng từ bàn phím
  }
  int sum = 0;
  printf("cac so trong day mang: ");
  for (int i = 0; i < n; i++) {
  //lặp lại vòng lặp i
    printf("%d ", a[i]);
    //hiển thị các số trong dãy mảng
    sum += a[i];
    //tính tổng các số trong mảng a[i]
  }
    printf("\n");
    printf("tong cac so trong day mang: %d ", sum);
    //xuất các giá trị có trong mảng ra màn hình 
  return  0;
}

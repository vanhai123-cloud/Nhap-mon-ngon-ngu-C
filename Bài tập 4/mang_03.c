#include <stdio.h>

int main () {
  int a[100];
  int n;
  printf ("nhap kich thuoc mang: ");
  scanf ("%d", &n);
  //mảng bắt đầu từ 0 và kết thúc ở bé hơn 4 
  printf("nhap so a tu ban phim: ");
  //hiển thị nhap 4 so tu ban phim ra màn hình
  for (int i = 0; i < n; i++) {
  //vong lặp bắt đầu từ 0 và bé hơn 4 theo mang[4]
    scanf("%d", &a[i]);
    //nhập số của mảng từ bàn phím
  }
  int chan = 0;
  int le = 0;
  printf ("dem cac so le: ");
  // cho printf ở ngoài vòng lặp nếu 0 thì sẽ bị lặp lại liên tục
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 != 0) {
    //khi a[i] chia cho 2 khác 0 thì là số lẻ
      le += a[i];
      //le = le + a[i] (tong cac so le)
    printf ("%d ", a[i]);
    //hiển thị dãy các số lẻ ra màn hình
    }
  }
  printf("\ndem cac so chan: ");
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0 ) {
    //khi a[i] chia hết cho 2 dư 0 thì là số chẵn
    printf ("%d ", a[i]);
    //hiển thị dãy các số chẵn ra màn hình
      chan += a[i];
      //chan = chan + a[i] (tổng các số chẵn)
    }
  }
  printf ("\ntong cac so le: %d\n", le);
  //hiển thì tổng các số chẵn ra màn hình
  printf ("tong cac so chan: %d", chan);
  //hiển thị tổng các số lẻ ra màn hình
  return  0;
}

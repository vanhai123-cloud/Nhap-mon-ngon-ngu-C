#include <stdio.h>

int main(void) {
int dem, tong, n;
  printf("nhap n tu ban phim: ");
scanf("%d", &n);
// hiển thị ra màn hình nhập n và cho n là con số cụ thể
tong = 0;
//cho tong bang 0
  for(dem = 1; dem <= n; dem = dem + 1){
// cho đếm bằng 1 và dem  = n, n được nhập từ bàn phím
    tong = tong + dem;
// có nghĩa là tổng từ 1 đến n
  }
printf("tong: %d", tong);
// hiển thị ra màn hình tổng = ???
return 0;
  }

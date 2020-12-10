#include <stdio.h>

int main(void) {
int dongia, soluong, thanhtien;
// nhập các biến cần thiết
  printf("nhap don gia va so luong\n");
// hiển thị chữ mở đầu ra màn hình cho dễ nhìn hơn
scanf("%d%d", &dongia, &soluong);
// dùng lệnh scanf để gán giá trị cho biến
thanhtien = dongia * soluong;
if (soluong >= 5){
  printf("so tien can phai thanh toan la %d", thanhtien *75/100);
// nếu số lượng mua nhỏ hơn lơn hơn hoặc bằng 5 thì sẽ giảm giá 25%
}else{
  printf("so tien can phai thanh toan la %d", thanhtien);
// Ngược lại số lượng nhỏ hơn 5 thì sẽ không giảm giá
}
  return 0;
}

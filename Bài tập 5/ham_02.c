//Khoi khai bao
#include<stdio.h>
int kiem_tra_am_duong (int n) {
return n;
//trả về n và xét n theo điều kiện bên dưới n nhập từ bạn phím
}

int main(){
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  if(kiem_tra_am_duong(n) > 0)
      printf("n la so nguyen duong ");
  else if (kiem_tra_am_duong(n) < 0)
    printf("n la so nguyen âm");
  else 
    printf("n = 0");
  return 0;
}

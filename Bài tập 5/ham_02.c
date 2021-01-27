//****************************************CODE**********
//Khoi khai bao
#include<stdio.h>
int kiemTraAmDuong(int n){
    return n;}
 //khoi ham main
int main(){
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  if(kiemTraAmDuong(n) > 0)
      printf("n la so nguyen duong ");
  else if (kiemTraAmDuong(n) < 0)
    printf("n la so nguyen âm");
  else 
    printf("n = 0");
  return 0;
}

// khoi dinh nghia ham

//*************************END CODE*****************************

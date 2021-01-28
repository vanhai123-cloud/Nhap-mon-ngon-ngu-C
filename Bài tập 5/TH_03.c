#include<stdio.h>//khoi khai bao

void Nhap(int a, int b, int c);//khai bao ham nhap

int Max(int a,int b, int c);//khai bai ham max
//khoi ham main
int main(){
  int a,b,c;
  Nhap(a,b,c);
  Max(a,b,c);
  printf("so lon nhat trong 3 chu so %d ",Max(a,b,c));
  return 0;
}
//khoi dinh nghia ham
void Nhap(int a, int b, int c){
  printf("\nnhap a = ");
  scanf("%d", &a);
  printf("\nnhap b = ");
  scanf("%d", &b);
  printf("\nnhap c = ");
  scanf("%d", &c);
}
int Max(int a,int b, int c){
    int maxvalue = a;
    if(maxvalue < b && b > c){
        maxvalue = b;
}
    if(maxvalue < c && c > a){
        maxvalue = c; 
    }
  return maxvalue;
}

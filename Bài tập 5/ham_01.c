#include <stdio.h>//khoi khai bao

int sum(int a,int b,int c);//khai bao ham sum
//khoi ham main
int main(){
  int x,y ,z ;
  printf("nhap x = ");
  scanf("%d", &x);
  printf("nhap y = ");
  scanf("%d",&y);
  printf("nhap z = ");
  scanf("%d",&z);
  printf("x+y+z=%d",sum(x,y,z));//goi ham sum
  return 0;
}
//khoi dinh nghia ham
int sum(int a,int b,int c){//dinh nghia ham sum
  return a+b+c;
}

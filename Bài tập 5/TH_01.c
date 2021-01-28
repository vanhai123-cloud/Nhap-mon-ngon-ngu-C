//ax^2 + bx + c = 0
#include<stdio.h>
#include<math.h>

int main(){
  float a, b, c;//khai bao
  printf("\nnhap a = ");
  scanf("%f", &a);
  printf("\nnhap b = ");
  scanf("%f", &b);
  printf("\nnhap c = ");
  scanf("%f", &c);
  float Denta = b * b - 4 * a * c;//khai bao 
  if( Denta < 0){
    printf("\n\aphuong trinh vo nghiem");
  }else if( Denta == 0){
    float x = -b / (2 * a);//khai bao
    printf("\n\aphuong trinh co nghiem kep: x1 = x2 = %f",x);
  }else{//Denta > 0
    float x1 = (-b + sqrt(Denta) / 2 * a);//khai bao
    float x2 = (-b - sqrt(Denta) / 2 * a);//khai bao
    printf("\n\aphuong trinh co hai nghiem phan biet:\nx1 = %f \nx2 = %f",x1, x2);
  }
  

  return 0;
}

#include <stdio.h>//khai bao thu vien
#define PI 3.14159//khai bao hang
int   main(){
 double DT, CV, R;//khai bao bien
  CV = 2*R*PI;
  DT = R*R*PI;
   printf("nhap ban kinh R: ");
  scanf("%lf", &R);
  printf("chu vi hinh tron la: %f\n", CV);
  printf("dien tich hinh tron la: %f", DT);
  getchar();
  
}

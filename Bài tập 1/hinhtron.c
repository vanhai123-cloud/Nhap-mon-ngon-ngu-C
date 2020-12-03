#include <stdio.h>

int main(void) {
double DT, CV, R;
//khai bao bien
R = 1.5;
 //gan bien R
const double PI = 3.14;
//Khai Bao Hang
CV = 2 * R * PI;
DT = R * R * PI;
// Tinh Chu vi dien tich
printf("CV = 2 * R * PI = %0.2f\n",CV);
printf("DT = R * R * PI = %0.3f\n",DT);
 //hien thi ra man hinh
printf("R   |  CV  |   DT\n");
printf("1.5 | 9.42 | 7.065");
  // tao bang
  return 0;
}

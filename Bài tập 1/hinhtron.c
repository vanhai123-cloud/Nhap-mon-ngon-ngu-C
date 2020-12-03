#include <stdio.h>
#define PI 3.14;
int main(void) {
  double CV, DT,R;
  R = 1.5;
  CV = 2*R*PI;
  DT = R*R*PI;
  printf ("chu vi hinh tron la: %f\n", CV);
  printf ("dien tich hinh tron la: %f", DT);
  return 0;
}

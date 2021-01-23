#include <stdio.h>

int sum (int a, int b, int c) {
  int sum = 0;
  sum = a + b + c;
}
void tong (int a, int b, int c) {
  int sum = 0;
  printf ("(ham void) tong cua a, b, c = %d\n", a + b + c);
}
int main () {
  int x,y,z;
  printf ("Nhap x = ");
  scanf ("%d", &x);
  printf ("Nhap y = ");
  scanf ("%d", &y);
  printf ("Nhap z = ");
  scanf ("%d", &z);
  tong (x, y, z);
  printf ("(ham int) tong cua x, y, z = %d", sum (x, y, z));
  return 0;
}

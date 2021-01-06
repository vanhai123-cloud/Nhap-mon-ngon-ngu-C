#include <stdio.h>

int main(void) {
  int i,n,sum;
  sum = 0;
  printf("nhap n = ");
  scanf("%d", &n);
  for(i=1;i<=n;i++){
    sum = sum + n;
  }printf("tong cua %d la %d",n,sum);

  return 0;
}

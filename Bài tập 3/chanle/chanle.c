#include <stdio.h>

int main(void) {
int n;
printf("nhap n tu ban phim = ");
//hien thi de nhap so
scanf("%d", &n);
if (n == 0){
	printf("%d bang 0 ", n);
//hien thi ra man hinh n = 0
}else if (n % 2==0){
	printf("%d la so chan", n);
//hien thi ra man hinh n la so chan
}else{
	printf("%d la so le", n);
//hien thi ra man hinh n la so l
	}
  return 0;
}

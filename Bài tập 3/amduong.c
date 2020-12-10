#include <stdio.h>

int main(void) {
int a;
printf("nhap a tu ban phim = ");
//hien thi de nhap so
scanf("%d", &a);
if (a == 0){
	printf("%d bang 0 ", a);
//hien thi a =0
}else if (a > 0){
	printf("%d lon hon 0 ", a);
//hien thi ra a > o
}else{
	printf("%d be hon 0 ", a);
//hien thi a <0
	}
  return 0;
}

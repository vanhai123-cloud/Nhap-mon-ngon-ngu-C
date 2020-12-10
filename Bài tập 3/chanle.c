#include<stdio.h>

int main(){
	int a ;//khai bao bien a
	printf("nhap so a = ",a);//hien thi a ra man hinh
	scanf("%d", &a);//nhap a
	//kiem tra a chan hay le
	if (a == 0){//dieu kien a
		printf(" %d bang khong",a);//hien thi a bang khong
	}else if   (a % 2 == 0){
		printf("%d la so chan",a);//hien thi a la so chan
	}else {
		printf("%d la so le",a);//hien thi a la so le
	}
	return 0;
}

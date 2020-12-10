#include<stdio.h>

int main(){
	int a ;//khai bao bien a
	printf("nhap so a = ",a);//hien thi a ra man hinh
	scanf("%d", &a);//nhap a
	//kiem tra a chan hay le
	if (a % 2 == 0){//dieu kien a
		printf(" %d la so chan",a);//hien thi ra a la so chan
	}else if   (a == 0){
		printf("%d bang khong",a);//hien thi a bang khong
	}else {
		printf("%d la so le",a);//hien thi a la so le
	}
	return 0;
}

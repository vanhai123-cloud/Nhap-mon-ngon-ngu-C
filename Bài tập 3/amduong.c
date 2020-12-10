#include<stdio.h>

int main(){
	int a ;//khai bao bien a
	printf("nhap so a = ",a);//hien thi a ra man hinh
	scanf("%d", &a);//nhap a
	//kiem tra a duong hay am
	if (a > 0){
		printf(" %d la so duong",a);//hien thi ra a la so duong
	}else if(a < 0){
		printf("%d la so am",a);//hien thi a la so am
	}else if  (a == 0){
		printf("%d bang khong",a);//hien thi a bang khong
	}
	return 0;
}

#include<stdio.h>

int main(){
	int n ;//khai bao bien n
	printf("nhap so n = ",n);//hien thi n ra man hinh
	scanf("%d", &n);//nhap n
	//kiem tra n chan hay le
	if (n == 0){//dieu kien n
		printf(" %d bang khong",n);//hien thi n bang khong
	}else if   (n % 2 == 0){
		printf("%d la so chan",n);//hien thi n la so chan
	}else {
		printf("%d la so le",n);//hien thi n la so le
	}
	return 0;
}

#include<stdio.h>

int main(){
	int dongia, soluong, thanhtien;//khai bao bien
	printf("don gia: ",dongia);
	scanf("%d", &dongia);//nhap don gia
	printf("\nso luong: ",soluong);
	scanf("%d",&soluong);//nhap so luong
	thanhtien = dongia * soluong;
	if(soluong>=5 & dongia>=500){//dieu kien
		printf("thanh tien = %d",thanhtien * 50 /100 );
	}else{
		printf("thanh tien = %d",thanhtien);
	}
	getch();
	return 0;
}

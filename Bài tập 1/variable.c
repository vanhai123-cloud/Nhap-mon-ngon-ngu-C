#include <stdio.h>

int main (void) {
	// khai bao bien num kieu int
	int num;
	// khai bao bien num
	num = 5;
	// hien thi bien num ra man hinh
	printf("Bien num co gia tri: %d\n",num);
	// Khai bao bien a kieu char
	char c;
	// khoi tao gia tri bien c
	c = 'a';
	// hien thi c ra man hinh 
	printf("Bien co gia tri: %c\n", c);
	// %c la hien thi ki tu
	printf("Bien num = %d Va Bien c = %c\n",num ,c);
	getchar();
	return 0;
}

#include<stdio.h>

int main()
{
	int i, n;//khai bao bien
	int S;
	S = 0;//gan gia tri cho bien
	i = 1;
	printf("\nNhap n = ");
	scanf("%d", &n);

	while(i <= n)
	{
		S = S + i;
		i++;
	}
	printf("\nTong 1 + 2 + ... + %d la %d: ", n, S);//in ra tong cua n
	return 0;
}

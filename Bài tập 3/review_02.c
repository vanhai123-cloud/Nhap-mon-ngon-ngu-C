#include<stdio.h>

int main(){
	int a, b,n ;
	printf("nhap so a: ",a);
	scanf("%d", &a);
	printf("nhap so b: ",b);	
	scanf("%d", &b);
	1<=a<=b<=1000000;
	n = a + b;
	
	
	
	if(n<=9 && n == a && b){
	
		switch(n){
			case 1:
				printf("one");break;
			case 2:
				printf("two");break;
			case 3:
				printf("three");break;
			case 4:
				printf("four");break;
			case 5:
				printf("five");break;
			case 6:
				printf("six");break;
			case 7:
				printf("seven");break;
			case 8:
				printf("eight");break;
			case 9:
				printf("nine");break;
		}
	}else if (n > 9 & n % 2 == 0)
	{
		printf("even",n);
	}else if(n > 9 & n % 2 == 1)
	{
		printf("odd",n);
	}
	for(n=a;n<=a&b;n=n+1){
		printf("")
	}
	return 0;
}

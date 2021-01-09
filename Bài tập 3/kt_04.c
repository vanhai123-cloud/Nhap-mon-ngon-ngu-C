#include<stdio.h>
int main()
{
	int i, n;
	int S;
	S = 0;
	i = 1;
	printf("\nNhap n: ");
	scanf("%d", &n);
	while(i <= n)
	{
		S = S + i;
		i++;
	}
	printf("\nTong 1 + 2 + ... + %d la %ld: ", n, S);
	return 0;
}
#include<stdio.h>
int main(){
	int n ;
  printf("nhap n = ");
  scanf("%d",&n);
	int s = 0;
	int so;
	while(n!=0){
		so = n % 10;
		n = n / 10;
		s = s + so;
	}printf("%d",s);
	return 0;
}

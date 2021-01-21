#include <stdio.h>
int main(void) {
  int a[100];
	int n;//so luong phan tu cua mang
  do{
    printf("\nnhap n = ");
    scanf("%d", &n);
  }while( n <= 0 || n > 100);
  for(int i = 0; i < n; i++){
    printf("\nnhap a[%d] = ",i);
    scanf("%d", &a[i]);
  }
  for(int i = 0;i < n;i++){
    printf("a[%d] = %d\n",i,a[i]);
  }
	int tong = 0;
	for(int i = 0;i < n;i++){//hien thi tong
		tong = tong + a[i];
	}printf("tong = %d",tong);
  return 0;
}

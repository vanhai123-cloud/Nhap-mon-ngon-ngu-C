//Khoi khai bao
#include<stdio.h>
void NhapMang(int a[], int n){
  for(int i = 0; i < n; i ++){
    printf("nhap mang a[%d]", i);
    scanf("%d", &a[i]);
  }
}

 //khoi ham main
int main(){
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  int a[n];
  Nhap_pt_mang(a);
  Hien_thi_pt_mang(a);
  Hien_thi_tong_chan(a);
  Dem_chan_le_0(a);
  return 0;
}

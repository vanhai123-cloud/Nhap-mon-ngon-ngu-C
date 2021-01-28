#include <stdio.h>


void nhap(int a[], int n)
{
  for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
int LN_n (int a[], int n)
{
    int LN_n = a[0];
    for (int i = 1; i < n; i++)
        if (LN_n < a[i])
            LN_n = a[i];
    return LN_n;
}
int main()
{
    int a[1000];
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    nhap(a,n);
    printf("\nphan tu lon nhat = %d", LN_n(a, n));
    return 0;
}

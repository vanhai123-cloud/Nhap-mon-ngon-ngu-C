#include<stdio.h>
 int main() {
    int n, i, S = 0;
    printf("nhap n: ");
    scanf("%d", &n);
    while (n != 0) // chuong trinh chay toi khi n = 0 thi dung
    {
        i = n % 10; // lay phan du cua n
        S += i;
        n = n / 10;
    }
        printf("tong cac chu so cua n la: %d", S);
    return 0;
 }

#include<stdio.h>

int main() {
    int n, chan = 0, le = 0;
    printf("nhap n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            chan = chan + i;
        if(i % 2 == 1)
            le = le + i;
    }
        printf("tong so chan la: %d \n",chan);
        printf("tong so le la: %d", le);
      return 0;
        
}#include<stdio.h>

int main() {
    int i = 1, n, chan = 0, le = 0;
    printf("nhap n: ");
    scanf("%d", &n);
    while( i <= n) {
        if(i % 2 == 0)
            chan = chan + i;
        if(i % 2 == 1)
            le = le + i;
            i++;
    }
        printf("tong so chan la: %d \n",chan);
        printf("tong so le la: %d", le);
      return 0;
        
}

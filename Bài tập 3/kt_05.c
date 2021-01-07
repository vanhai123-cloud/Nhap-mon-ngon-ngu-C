#include<stdio.h>

int main() {
    int n, chan = 0, le = 0;
    printf("nhap n: ");
    //hiển thị dòng nhập n ra màn hình
    scanf("%d", &n);
    //nhập số n từ bàn phím
    for(int i = 1; i <= n; i++) {
    //vòng lặp bắt đầu từ 1 đến n và tăng dần 1 giá trị
        if(i % 2 == 0)
        //khi i chia cho 2 dư 0 thì là số chẳn
            chan += i;
            //chan = chan + i. (là bằng  0  + i). Khi vòng lặp tăng dần thì số chẳn sẽ cộng vào với nhau
        if(i % 2 == 1)
        // khi i chia cho 2 và dư 1 thì là số chẵn
            le += i;
            //chan = chan + i (là băng 0 + i). Khi vòng lặp tăng dần thì sẽ cộng các số lẻ lại với nhau
    }
        printf("tong so chan la: %d \n",chan);
        printf("tong so le la: %d", le);
        
}

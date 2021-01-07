#include<stdio.h>
 int main() {
    int n, i, S = 0;
    printf("nhap n: ");
    //hiển thị ra dòng nhập n để dễ nhìn hơn
    scanf("%d", &n);
    //nhập số n từ bàn phím
    if ( n > 0) {
        while (n != 0) {
        // vòng lặp chỉ kết thúc khi n khác 0
        i = n % 10;
        //i bằng n chia cho 10 và lấy phần dư (ví dụ: 12 thì chia cho 10 dư 2 ==> lấy 2)
        S += i;
        // s = s + i. bằng 0 + i (i là phần dư lấy được ở cầu lệnh trên)
        n = n / 10;
        //n chia 10 và lấy phần nguyên (ví dụ: 12 thì chia cho 10 dư 2 ==> thì lấy 10)
        //vòng lặp tiếp tục đến khi không chia được nữa
    }
        printf("tong cac chu so cua n la: %d", S);
        //hiển thị "tong cac chu so cua n la: " ra màn hình
    } else printf("khong the chay chuong trinh!");
    // nếu diều khiện sai thì sẽ "khong the chay chuong trinh"
    return 0;
 }

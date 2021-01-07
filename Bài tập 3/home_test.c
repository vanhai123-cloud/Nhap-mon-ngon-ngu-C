#include <stdio.h>
void calculate_the_maximum(int n, int k) {
//cái này về hàm trên Hackerrank có sẵn (chưa học)
    int maxAnd, maxOr, maxXor;
    //maxAnd, maxOr, maxXor là toán tử bit
    maxAnd = 0, maxOr = 0, maxXor = 0;
    //gán các toán tử bit = 0 để khi hiển thị ra màn hình không bị sai
    for (int i = 1; i <= n; i++) {
    //vòng lặp bắt đầu từ 1 đến n (n nhập từ bàn phím) và tăng dần 1 giá trị
        for (int g = i + 1; g <= n; g++) {
        //vòng lặp lặp bắt đầu từ i + 1 và kết thúc ở n (n nhập từ bàn phím) và tăng dần 1 giá trị
            if (((i & g) > maxAnd) && ((i & g) < k)) {
            //nếu i & g lớn maxAnd = 0 và đồng thời bé hơn k thì hợp lệ (& là toán tử And)
            // K là điều kiện đề bài cho
                maxAnd = i & g;
                //là 0 = i và g là toán tử bit And
                //ví dụ: 0 & 0 = 0; 0 & 1 = 0; 1 & 0 = 0; 1 & 1 = 1 
            }
            if (((i | g) > maxOr) && ((i | g) < k)) {
            //nếu i | g lớn học MaxOr = 0 và đồng thời i hoặc g bé hơn k thì hợp lệ (| là toán tử Or)
            //k là điều kiện đề bài cho 
                maxOr = i | g;
                //0 = i hoặc g. Toán tử bit Or
                //ví dụ: 0 | 0 = 0; 0 | 1 = 1; 1 | 0 = 1; 1 | 1 = 1
            }
            if (((i ^ g) > maxXor) && ((i ^ g) < k)) {
            //nếu i ^ g lớn hơn maxXor = 0 và đồng thời i ^ g bé hơn k thì hợp lệ (^ là toán tử Xor)
            //k là điều kiện đề bài cho 
                maxXor = i ^ g;
                //0 = i giống g. Toán tử Or
                //ví dụ: 0 ^ 0 = 0; 0 ^ 1 = 1; 1 ^ 1 = 0; 1 ^ 0 = 1;
            }
        }
    }
    printf ("\nMax And = %d\n", maxAnd);
    printf ("max Or = %d\n", maxOr);
    printf ("max Xor = %d\n", maxXor);
    // hiển thị kết quá của max toán tử bit ra màn hình
    }
int main() {
    int n, k;
    //dùng lệnh int gán giá trị n và k (n là số nhập từ bàn phím, k là điều kiện mà đề bài cho)
    printf("nhap n: ");
    //hiển thị dòng "nhap n: " ra màn hình
    scanf("%d", &n);
    printf("nhap k: ");
    //hiển thị dòng "nhap k" ra màn hình
    scanf("%d", &k);
    calculate_the_maximum(n, k);
    //phần này là kết thúc của dòng lệnh hàm (chưa học) có sẵn trên Hackerrank
    return 0;
}

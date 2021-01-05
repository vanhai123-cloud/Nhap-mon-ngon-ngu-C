#include<stdio.h>
int main (){
for (int i = 1; i <= 20; i++) {
//cho giá trị bắt đầu từ 1 và kết thúc khi bằng 20 và tăng dần 1 giá trị
    if (i % 2 == 1 && i != 5 && i != 11 && i != 15){
    // i chia cho 2 dư 1 dể lấy số lẻ 
    //!= là toán tử khác. Nên dòng lệnh này có nghĩa là i khác 5, 11 và 15
       printf("%d ", i);
    //hiển thị i tăng dần 1 giá trị và loại bỏ 5, 11 và 15 
    }
}
    return 0;
}

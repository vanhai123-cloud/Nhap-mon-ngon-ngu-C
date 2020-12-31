#include<stdio.h>
int main (){
    int a, b;
        printf("nhap a tu ban phim = ");
        // hien thi ra màn hình "nhap a tu ban phim = " cho dễ nhìn
    scanf("%d", &a);
        printf("nhap b tu ban phim = ");
        // hien thi ra màn hình "nhap a tu ban phim = " cho dễ nhìn
    scanf("%d", &b);
    for (int i = a; i <= b; i++) {
    //cho for bắt đầu từ a và kết thúc khi bằng b hoặc bé hơn và tăng dần 1 giá trị
        if (i == 1){
            printf("one\n");
            //nếu i = 1 thì sẽ hiển thị one ra màn hình. Mấy cái dưới tương tự
        }else if (i == 2){
            printf("two\n");
        }else if (i == 3){
            printf("three\n");
        }else if (i == 4){
            printf("four\n");
        }else if (i == 5){
            printf("five\n");
        }else if (i == 6){
            printf("six\n");
        }else if (i == 7){
            printf("seven\n");
        }else if (i == 8){
            printf("eight\n");
        }else if (i == 9){
            printf("nine\n");
        }if (i % 2 == 0 && i > 9){
            printf("even\n");
            //khi i chia cho 2 dư 0 (có nghĩa là số chẵn) và i lớn hơn 9 thì sẽ hiển thị ra màn hình "even" 
        }else if (i % 2 == 1 && i > 9){
            printf("odd\n");
            //khi i chia cho 2 dư 1 (có nghĩa là số lẻ) và i lớn hơn 9 thì sẽ hiển thị ra màn hình "odd" 
        }
    }
    return 0; 
}

#include<stdio.h>
int main (){
    printf("nhap n tu ban phim = ");
    //hiển thị ra màn hình để dễ nhìn hơn
    int n;
    scanf ("%d", &n);
    //nhập số n từ bán phím
    if (n > 9){
        printf("Greater than 9");
        //nếu lơn hơn 9 thì sẽ hiển thị ra màn hình "Greater than 9"
    }else if (n == 1){
        printf("one");
        //nếu khác if thì n == 1 sẽ hiển thị ra màn hình là "one"
    }else if (n == 2){
        printf("two");
    }else if (n == 3){
        printf("three");
    }else if (n == 4){
        printf("four");
    }else if (n == 5){
        printf("five");
    }else if (n == 6){
        printf("six");
    }else if (n == 7){
        printf("seven");
    }else if (n == 8){
        printf("eight");
    }else if (n == 9){
        printf("nine");
    }
    return 0; 
}

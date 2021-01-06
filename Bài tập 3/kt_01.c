#include<stdio.h>
int main () {
    printf (" === in bang cuu chuong ra man hinh ===\n");
    //in ra màn hình dòng bảng cưu chương ra màn hình 
    for (int i = 1; i < 10; i++) {
        //cho vòng lặp từ 1 đến 9
        printf ("        -- bang cuu chuong %d --\n", i);
        //in bảng cửu chương số ... ra màn hình
        for (int j = 1; j < 10; j++) {
        //cho vòng lặp từ 1 đến 9
        printf ("               %d x %d = %d\n", i, j, i * j);
        //vì for j nằm trong for i nên khi in ra màn hình thì for i chạy 1 thì for j chạy từ 1 đến 9
        //khi * thì sẽ ra bảng cửu chương
    }
    }
    return 0;
}

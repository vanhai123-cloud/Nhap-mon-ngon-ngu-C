  #include <stdio.h>

int main(void) {
 	int thang;
  printf("nhap thang: ");
  // hiển thị dòng nhap thang ra màn hình để dễ nhìn
  scanf("%d",&thang);
  switch(thang){
    case 2:
      printf("28 ngay");
    break;
    // cho case 2 bằng với 28 ngày
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      printf("31 ngay");
    break;
    // cho case 1, 3, 5, 7, 8, 10, 12 bằng với 31 ngày
    case 4:
    case 6:
    case 9:
    case 11:
    	printf("30 ngay");
    // cho case 4, 6, 9, 11 bằng với 30 ngày
    break;
    default:
      printf("vui long nhap thang");
    // khi không nhập đúng số tháng thì sẽ hiển thị vui long nhap thang ra màn hình
  }
  return 0;
  }

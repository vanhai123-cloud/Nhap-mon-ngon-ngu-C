#include<stdio.h>

int main(){
    int i;
    for( i = 1; i <= 20; i = i + 2)
    {
      if( (i == 5) || (i == 11) || (i == 15))continue;//o day su dung cau lenh continue thay cho break boi vi neu su dung break thi no se ket thuc o dieu kien dau tien con continue se quay lai kiem tra dieu tra dieu kien va thuc hien vong lap tiep theo
      printf("%d ",i);
    }
  
  return 0;
}
#include<stdio.h>

int main(){
  int i ;
  i = 1;
  while( i <= 20 ){
    if ((i == 5) || (i == 11) || (i == 15))continue;{
    printf("%d ",i);
    }
    i++;
  }
  return 0;
}

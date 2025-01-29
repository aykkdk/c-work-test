#include <stdio.h>
#include <stdlib.h>
 int main(void)
  {
    int a,b,c,d;
    printf("請輸入車票票價:");
    scanf("%d",&a);
    b=a/10;
    c=(a-b*10)/5;
    d=(a-b*10-c*5);
    printf("你需要投入%d枚10元%d枚5元%d枚1元\n",b,c,d);
    system("pause");
    return 0;
   }
  

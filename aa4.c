#include <stdio.h>
#include <stdlib.h>
 int main(void)
  {
   int a;
   printf("請輸入一個數字:");
   scanf("%d",&a);
   if(a%2==0)
   {
   printf("%d是偶數\n",a);
    } else{
	printf("%d是奇數\n",a);	
	}
    system("pause");
    return 0;
}

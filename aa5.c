#include <stdio.h>
#include <stdlib.h>
 int main(void)
  {
    int a,b,c,d;
    printf("�п�J��������:");
    scanf("%d",&a);
    b=a/10;
    c=(a-b*10)/5;
    d=(a-b*10-c*5);
    printf("�A�ݭn��J%d�T10��%d�T5��%d�T1��\n",b,c,d);
    system("pause");
    return 0;
   }
  

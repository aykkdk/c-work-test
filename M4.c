#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a;
	float b;
	printf("請輸入<使用整數>:");
	scanf("%d",&a);
	printf("請輸入折扣<使用浮點數，例如打八折，則輸入0.8>:");
	scanf("%f",&b);
	printf("打折後的金額:%f元\n",a*b);
	system("pause") ; 
	return 0;
}

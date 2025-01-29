#include <stdio.h> 
#include <stdlib.h> 
int main()
{
    float a;
	printf("請輸入圓球半徑:\n");
	scanf("%f",&a);
	printf("計算後圓球體積為%.2f立方公分\n",(4.0/3.0)*3.14*(a*a*a));
	system("PAUSE");
	return 0; 
	
}

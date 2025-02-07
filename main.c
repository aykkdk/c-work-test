#include <stdio.h> 
#include <stdlib.h> 
int main()
{
    float a;
	printf("請輸入華氏溫度:\n");
	scanf("%f",&a);
	printf("換算後為%.2f攝式度\n",(a-32)/9*5);
	system("PAUSE");
	return 0; 
	
}

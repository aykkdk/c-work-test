#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float a,b,BMI;
	printf("請輸入身高和體重並用空格區隔");
	scanf("%f %f",&a,&b);
	BMI=b/(a*2);
    if(BMI<18.5)
    {
    printf("你的BMI是%.1f為過輕\n",BMI);
	} else if ((BMI>=18.5)&&(BMI<24))
	{
	printf("你的BMI是%.1f為標準\n",BMI);	 
	} else if (BMI>=24) 
	{
	printf("你的BMI是%.1f為過重\n",BMI);	 
	}
	system("pause") ;
	return 0;
}

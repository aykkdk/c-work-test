#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float a,b,BMI;
	printf("�п�J�����M�魫�åΪŮ�Ϲj");
	scanf("%f %f",&a,&b);
	BMI=b/(a*2);
    if(BMI<18.5)
    {
    printf("�A��BMI�O%.1f���L��\n",BMI);
	} else if ((BMI>=18.5)&&(BMI<24))
	{
	printf("�A��BMI�O%.1f���з�\n",BMI);	 
	} else if (BMI>=24) 
	{
	printf("�A��BMI�O%.1f���L��\n",BMI);	 
	}
	system("pause") ;
	return 0;
}

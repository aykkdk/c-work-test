#include <stdio.h> 
#include <stdlib.h> 
int main()
{
	int i=3000,days=0;
	while(i>=5)
	{
		i=i/2;
		days=days+1;
		i++;
	}
   printf("��÷�l�u��5�����ɦ@��F%d��\n",days);
   system("pause");
   return 0;
}

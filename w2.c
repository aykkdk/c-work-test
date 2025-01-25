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
   printf("當繩子短於5公分時共花了%d天\n",days);
   system("pause");
   return 0;
}

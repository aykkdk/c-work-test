#include <stdio.h> 
#include <stdlib.h> 
int main()
{
	int i,all=0;
	for(i=1;i<100;i++)
	{
		if((i%3==0)&&(i%8==0))
	    all=all+i;	
	}
	printf("�i�H�Q3�M8���㰣���Ʀr�`�M�O=%d",all);
	system("pause");
    return 0;
}

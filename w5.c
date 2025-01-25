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
	printf("可以被3和8的整除的數字總和是=%d",all);
	system("pause");
    return 0;
}

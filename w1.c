#include <stdio.h> 
#include <stdlib.h> 
int main()
{
	int a,i,ab=0;
	do
	{
	    printf("輸入一個整數:");
		scanf("%d",&a);
	}
	while(a<=0);
	for(i=1;i<=a;i++)
	if(a%i==0)
	ab+=i;
	if(1+a==ab)
	 printf("是質數\n");
	 else
	 printf("不是質數\n");
	system("pause");
    return 0;	
	}

	

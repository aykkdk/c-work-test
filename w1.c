#include <stdio.h> 
#include <stdlib.h> 
int main()
{
	int a,i,ab=0;
	do
	{
	    printf("��J�@�Ӿ��:");
		scanf("%d",&a);
	}
	while(a<=0);
	for(i=1;i<=a;i++)
	if(a%i==0)
	ab+=i;
	if(1+a==ab)
	 printf("�O���\n");
	 else
	 printf("���O���\n");
	system("pause");
    return 0;	
	}

	

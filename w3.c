#include <stdio.h> 
#include <stdlib.h> 
int main()
{
	int num,n=0;
  do{
   do
	{
	printf("�п�J�@�ӼƦr:");
	scanf("%d",&num);
	}
	while(num<=0);
	int i=1;
	do{
	
	printf("*");
	  i++; 
	  }while(i<=num);
		printf("\n");
		n++;
	}while(n<3);
	system("pause");
    return 0;
}

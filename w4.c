#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{
	int input;
	int cnt=0;
	int passwd=6128;
	while(cnt<4) 
	{
	    printf("�п�J�K�X:");
		scanf("%d",&input);
	    cnt++;	
		if(input==passwd){ 
		   printf("�K�X��J���T�A�w��ϥΥ��t��\n");
			break;
		}
	if(cnt==4){ 
		   printf("�K�X��J���~�W�L�T��\n");
			break;
		}
		}
		system("pause");
     	return 0;
	
	
}
	



#include <stdio.h>
#include <stdlib.h>

int main () 
{   
    int a,i=0,b;
    char c;
	printf("�п�J�K�X");
	scanf("%d",&a);
	if(a==0000){
	i=1;
		printf("�K�X���T\n",i);
		 } 
	else{
		printf("�藍�_�A�ҿ�J�K�X���~ bye!!\n");
	}
	while(i==1){ 
	printf("***�w��ϥΥ���ATM**\n");
	printf("\n********************\n");
	printf("*   1. �d�s�ھl�B: *\n");
	printf("*   2. �s��:       *\n");
	printf("*   3. ����:       *\n");
	printf("********************\n");
	printf("\n�{���]�p��:����	�M�Q���X:********\n");
	printf("�п�J�����Ǹ�:");
	scanf("%d",&b);
	switch (b) 
	{
        case 1:
     	printf("�A��ܬd�ߦs�ھl�B\n");
     	i=0;
     	break;
     	case 2:
     	printf("�A��ܦs��\n");
     	i=0;
     	break;
     	case 3:
     	printf("�A��ܴ���\n");
     	i=0;
     	break;
        default:
     	printf("�藍�_�A�ﶵ���~!!\n");
     	i=0;
     	 break; 
	}
	printf("Y�~��ϥΡA��L���s����:r\n");
	scanf("%s",&c);
	if(c==89) 
	{
		i=1;
	}
	} 
	system("PAUSE");
	return 0;
	}

#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int i, num,num1=0,num2=0,num3=0,num4=0,others=0;  
	 while(i<=5)
    i++;
	{
		printf("\���Ʀp�U:\n1: ����\n2: ���\n3: �Q�s��\n4: �M��\n");
		printf("�аݱz�n����M����(1-4):");
		scanf("%d", &num);
		switch(num)
		{
			case 1:
				num1++;
				break;
			case 2:
				num2++;
				break;
			case 3:
				num3++;
				break;
			case 4:
				num4++; 
				break;
			default:
				printf("��J���~�Э���:");
				others++;
				 break; 
		}
		printf("�ثe�o����\n����:%d, ���:%d, �Q�s��:%d, �M��:%d, �o��:%d\n", num1, num2,num3,num4,others);
        
	}
	
	return 0;
}


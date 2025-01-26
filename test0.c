#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int i, num,num1=0,num2=0,num3=0,num4=0,others=0;  
	 while(i<=5)
    i++;
	{
		printf("\飲料如下:\n1: 紅茶\n2: 綠茶\n3: 烏龍茶\n4: 清茶\n");
		printf("請問您要選哪杯飲料(1-4):");
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
				printf("輸入錯誤請重試:");
				others++;
				 break; 
		}
		printf("目前得票數\n紅茶:%d, 綠茶:%d, 烏龍茶:%d, 清茶:%d, 廢票:%d\n", num1, num2,num3,num4,others);
        
	}
	
	return 0;
}


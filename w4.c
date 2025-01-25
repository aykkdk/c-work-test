#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{
	int input;
	int cnt=0;
	int passwd=6128;
	while(cnt<4) 
	{
	    printf("請輸入密碼:");
		scanf("%d",&input);
	    cnt++;	
		if(input==passwd){ 
		   printf("密碼輸入正確，歡迎使用本系統\n");
			break;
		}
	if(cnt==4){ 
		   printf("密碼輸入錯誤超過三次\n");
			break;
		}
		}
		system("pause");
     	return 0;
	
	
}
	



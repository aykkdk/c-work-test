#include <stdio.h>
#include <stdlib.h>

int main () 
{   
    int a,i=0,b;
    char c;
	printf("請輸入密碼");
	scanf("%d",&a);
	if(a==0000){
	i=1;
		printf("密碼正確\n",i);
		 } 
	else{
		printf("對不起，所輸入密碼錯誤 bye!!\n");
	}
	while(i==1){ 
	printf("***歡迎使用正修ATM**\n");
	printf("\n********************\n");
	printf("*   1. 查存款餘額: *\n");
	printf("*   2. 存款:       *\n");
	printf("*   3. 提款:       *\n");
	printf("********************\n");
	printf("\n程式設計者:未知	專利號碼:********\n");
	printf("請輸入對應序號:");
	scanf("%d",&b);
	switch (b) 
	{
        case 1:
     	printf("你選擇查詢存款餘額\n");
     	i=0;
     	break;
     	case 2:
     	printf("你選擇存款\n");
     	i=0;
     	break;
     	case 3:
     	printf("你選擇提款\n");
     	i=0;
     	break;
        default:
     	printf("對不起，選項錯誤!!\n");
     	i=0;
     	 break; 
	}
	printf("Y繼續使用，其他按鈕結束:r\n");
	scanf("%s",&c);
	if(c==89) 
	{
		i=1;
	}
	} 
	system("PAUSE");
	return 0;
	}

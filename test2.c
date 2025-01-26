#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	printf("請輸入1-7判斷今天星期幾:\n");
	scanf("%d",&a);
	switch(a)
	{

	case 1:case 2:case 3:case 4:case 5:
    	printf("唉~ 今天要上班\n");
				break;
	case 6: case 7:
		printf("耶~~ 今天休息\n");
				break;
		default:
		 printf("輸入錯誤");		
		}		
}

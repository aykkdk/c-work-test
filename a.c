#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
  {
	int a,computer;
	srand(time(NULL));
    computer = rand()%3 + 1;
	printf("猜拳遊戲:請輸入剪刀1石頭2布3\n");
	printf("請出拳:");
	scanf("%d",&a);
	printf("電腦出拳%d\n",computer);
	if(a==computer) {
		printf("平手");} 
		else if (a==1&&computer==2||a==2&&computer==3||a==3&&computer==1){ 
		printf("輸");}
		else { 
		printf("贏");}
		} 
	
	
	
		
	
	
  	
  

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
  {
	int a,computer;
	srand(time(NULL));
    computer = rand()%3 + 1;
	printf("�q���C��:�п�J�ŤM1���Y2��3\n");
	printf("�ХX��:");
	scanf("%d",&a);
	printf("�q���X��%d\n",computer);
	if(a==computer) {
		printf("����");} 
		else if (a==1&&computer==2||a==2&&computer==3||a==3&&computer==1){ 
		printf("��");}
		else { 
		printf("Ĺ");}
		} 
	
	
	
		
	
	
  	
  

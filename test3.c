#include<stdio.h>
#include<stdlib.h> 

int main() {
    int i = 0, total = 0;
    while(i <= 300) { 
	 i++;
	 if(i%3==0&&i%8==0){
	   total += i;
	   }
    }
    
    printf("1�[��300���`�M�P�ɥi�Q3�M8�`��:%d\n", total);
    
    return 0;
}

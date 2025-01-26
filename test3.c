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
    
    printf("1加到300的總和同時可被3和8總除:%d\n", total);
    
    return 0;
}

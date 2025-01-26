#include<stdio.h>
#include<stdlib.h> 

int main() {
    int i = 100, total = 0;
    while(i < 200) {
            i++;
            total += i;
    }
    
    printf("101加到200的總和:%d\n", total);
    
    return 0;
}

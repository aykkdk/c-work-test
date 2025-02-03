#include<stdio.h>
#include<stdlib.h>

int main() {
   int liter, member, age;
   float total, price = 20.5;	
   printf("加幾公升: "); 
   scanf("%d", &liter); 
   printf("會員(1), 非會員(2): ");
   scanf("%d", &member); 
   printf("幾歲: ");
   scanf("%d", &age);
   if((member == 1)&&(age >= 65))
      total = liter * price * 0.9; 
    else if((member == 1)||(age >= 65)) 
      total = liter * price * 0.95; 
    else
      total = liter * price;
   printf("總金額: %.2f 元\n", total);
    return 0;
}

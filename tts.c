#include<stdio.h>
#include<stdlib.h>

int main() {
   int liter, member, age;
   float total, price = 20.5;	
   printf("�[�X����: "); 
   scanf("%d", &liter); 
   printf("�|��(1), �D�|��(2): ");
   scanf("%d", &member); 
   printf("�X��: ");
   scanf("%d", &age);
   if((member == 1)&&(age >= 65))
      total = liter * price * 0.9; 
    else if((member == 1)||(age >= 65)) 
      total = liter * price * 0.95; 
    else
      total = liter * price;
   printf("�`���B: %.2f ��\n", total);
    return 0;
}

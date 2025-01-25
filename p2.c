#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[6]={10, 20, 30, 40, 50, 60};
	int i, total=0;
	for (i=0; i<6; i++) {
  		  total += arr[i];
	}
	
	printf("Á`©M¬°%d\n", total);
	system("PAUSE");
	return 0;
}

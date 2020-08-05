#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



int main() {
	system("chcp 1251>null");
	int a,b;
	printf("¬ведите число: \n");
	scanf_s("%d", &a);
	b = (a/10)%10;
	
	printf("%d", b);
	

		
	return 0;

}
#include <stdio.h>

int numbers(int a) {
	int fact = 1;
	for (int i = 1 ;i <= a;i++) {
		   fact = fact * i; 
	}
	return fact;
}
int main() {
	
	int a;
printf("a : ");
scanf("%d", &a);
if (a > 0) {
	

	printf("le factoriel de %d  est :", a);
	for (int i = a; i >= 1;i--) {
	printf("%d ", i);
	
	if(i != 1) {
		printf("*");

}
}
printf("= %d \n",numbers(a));
	} else {
		 printf("La factorielle n'est pas definie pour les nombres negatifs.\n");
	}
	
	return 0;
}

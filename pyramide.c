#include <stdio.h>

void premiernombre(int n) {
	
	for(int i = 1; i <= n ; i++) {
		if(n % i == 0) {
			printf(" un de des divisors de %d est %d \n", n, i);
		}
	}
	printf("\n");
}

int main() {
	int nombre;
	printf("sassir un nombre : ");
	scanf("%d", &nombre);
 
		premiernombre(nombre);
	
	return 0;
}
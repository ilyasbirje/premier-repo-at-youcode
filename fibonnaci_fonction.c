#include <stdio.h>

void suit(int n) {
	int a = 0, b = 1,qsm;
	printf("La suit fibonnaci de %d \n", n);
	for (int i = 0 ; i < n;i++) {
		printf("%d,", a);
		qsm = a + b;
		b = a;
		a = qsm;
	}
	
	
} int main() {
	
	int n;
	printf("Saissir n : ");
	scanf("%d", &n);
	
	if (n >= 0) {
		suit(n);
	} else {
		printf("entrer un nombre entier positif (+) ou n >= 0 ");
	}
	
	return 0;
}
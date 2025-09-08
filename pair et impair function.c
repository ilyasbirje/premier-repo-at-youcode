#include <stdio.h>

void pair_impair(int n) {

	if (n % 2 == 0) {
		printf("%d est un nombre pair \n", n);
 } else {
  		printf("%d est un nombre impair \n", n);
	
 }
 
}
int main() {
	int n;
	printf("saissir un nombre  : ");
	scanf("%d", &n);
	
	pair_impair(n);
return 0;
}

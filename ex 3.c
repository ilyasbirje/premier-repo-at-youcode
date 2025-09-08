#include <stdio.h>
/*   */ 
void deuxiemenombre(int n) {
	
    printf("Les diviseurs de %d sont: ", n);
		 
		 
		for(int i = 1; i <= n ; i++) {
		if(n % i == 0) {
			printf(",%d", i);		
		}
	}
	printf("\n");
}

void premiernombre(int n) {
	int div=0;
	for(int i = 1; i <= n ; i++) {
		  if (n % i == 0) {
			div++;
		}
		
	}
	if (div == 2)  {
		printf("%d est un nombre premier \n", n);
		
	} else {
		printf("%d n'pas un nombre premier \n", n);
	}
	
}

int main() {
	int nombre;
	printf("sassir un nombre : ");
	scanf("%d", &nombre);
	
	 deuxiemenombre(nombre);
	 premiernombre(nombre);
	 

	return 0;
}
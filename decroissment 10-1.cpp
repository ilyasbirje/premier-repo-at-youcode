#include <stdio.h> 

int premierpas(int n) {

	if(n==1) return 1;
	if(n < 2) return 0;
for(int i = 2; i*i <= n; i++ ) {
	if(n % i == 0) return 0;
}	
return 1;
}

int main(){
	int line;
	int n = 1;
	int compteur = 0;
	printf("saisir le nombres de lines : ");
	scanf("%d", &line);

while (line > compteur) {
	if(premierpas(n)){
		
	for(int j = 0; j < line - compteur - 1;j++ ) {
		printf(" ");
		
	}
	for (int j = 0; j < n;j++) {
		printf("*");
		
	}
	printf("");
	printf("\n");
	compteur++;
}
n++	;
}

	return 0;
}
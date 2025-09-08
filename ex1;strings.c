#include <stdio.h>

int main() {
	
	//la chaine + lindice 0 a la chaine[]
	// relation fgets +  sizeof
	char chaine1[50]; 
	char chaine2[50];
	int i,j;

printf("Get chaine 1: ");
fgets(chaine1, sizeof(chaine1), stdin);

for(i = 0;chaine[i] != 0;i++) {
	if(chaine[i - 1] == \n) {
		i--;
	}
	}

printf("Get chaine 2: ");
fgets(chaine1, sizeof(chaine2), stdin);

for(j = 0;chaine[j] != 0;j++) {
	if(chaine[j - 1] == \n) {
		j--;
	}
	}
	
	chaine[1] = chaine[2];
	printf("les deux  est chaine %s", chaine[1]);
	
	
	return 0;
}
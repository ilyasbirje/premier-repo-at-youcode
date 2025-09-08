// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

struct etudiant {
    
#define max 50 
#define max_etudiant 5

    char nom[max_etudiant][max];
    char prenom[max_etudiant][max];    
    int notes[max_etudiant];
    int salaire[max_etudiant];

};


int main() {
    
struct etudiant a1;

    strcpy(a1.nom[0], "ilyas");
    strcpy(a1.prenom[0], "birje");
    a1.notes[0] = 20;
    a1.salaire[0] = 4000;

    printf("%s \n", a1.prenom[0]);
    printf("%s \n", a1.nom[0]);
printf("%d \n", a1.notes[0]);
printf("%d $\n", a1.salaire[0]);

    printf("========================== \n");

struct etudiant a2;

    strcpy(a2.nom[2], "amine");
    strcpy(a2.prenom[2], "berje");
    a2.notes[2] = 14;
    a2.salaire[2] = 5000;
    printf("%s \n", a2.nom[2]);
    printf("%s \n", a2.prenom[2]);
    printf("%d \n", a2.notes[2]);
printf("%d $ \n", a2.salaire[2]);
    return 0;
}


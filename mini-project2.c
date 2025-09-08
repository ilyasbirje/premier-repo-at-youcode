// Système de Gestion de Contacts
//les donner : nom numero de telephone et une adress email
//detail du project : 
//ajout un contact {stoker sur structure Contact}
//modification, un contact 
//suprrimer un contact
//afficher tous les contact 
//rechercher un contact  on peut utilise jiust Variables Conditions Boucles Tableaux Chaînes de caractères Structures 

#include <stdio.h>
#include <string.h>

#define max 50
#define max_contact 20

struct contacts {
	
	char nom[max_contact][max];
	char adress_email[max_contact][max];
	char numero[max_contact][max];
	
};

	int main(){
	
	struct contacts A;
	int personne = 0; // le conteur si on ajout 1 persoone ou contact == personne++ 
	int n;	// les contact peut ajouter  ( compare )
	int choix;
start:
for (int menu = 0; menu < 5 ; menu++) {
	printf("\n=========== MENU ===========\n");
	printf("1.ajouter    un contact :\n");
	printf("2.Afficher   un contact : \n");
	printf("3.modifier   un contact : \n");
	printf("4.suprrimer  un contact : \n");
	printf("5.rechercher un contact : \n");
	printf("0.EXIT \n");
	
	printf("choisi un choix ");
	scanf("%d", &choix);


	switch(choix) {
	
	case 1: 
	
printf("Combien des contacts voulez-vous ajouter ? :");
scanf("%d", &n);

			for(int i = 0; n > i ; i++){
			


	printf("Le nom :");
	scanf("%s", A.nom[personne]);
	
	printf("l'adress email :");
	scanf("%s", A.adress_email[personne]);
	
	printf("Le numero de telephone :");
	scanf("%s", &A.numero[personne]); 
	personne ++;
}                                 
break;

	case 2: 
	printf("\n==== Liste des contacts ===\n");
	if (personne == 0) {
		printf("aucune contact sur votre liste");
	}else {
		for (int i = 0; i < personne; i++) {
			printf("%d ) \n", i + 1);
printf("Le nom : %s\n",A.nom[i]);
printf("l'adress email : %s\n", A.adress_email[i]);
printf("Le numero de telephone : %s\n", A.numero[i] );	
printf("-----------------------\n");
	}
}                                                  
break;

case 3 :
	if (personne == 0) {
		printf("Aucune contact pour le modifier");
		break;
	}
char nom_modif[max];
printf("Entrez le nom du contact pour le modifier : ");
scanf("%s", nom_modif);
int trouve = 0;
for (int i = 0; i < personne ; i++) {
	
	if(strcmp(A.nom[i], nom_modif) == 0) {
		printf("Noveau nom");
		scanf("%s", A.nom[i]);
		printf("Nouvelle adress email : "); 
		scanf("%s", A.adress_email[i]);
		printf("Nouveau numero :");
		scanf("%s", A.numero[i]);
		printf(" le contact etait modifié avec succes");
		trouve = 1;
		break;
	}
}
if (!trouve) {
	printf("Contact introuvable");
}
break;
}

case 4: {

	if (personne == 0) {
		printf("Aucune personne detecté");
		break;
	
}
	char nom_sup[max];
	printf("Entrer le nom pur supprimer : ");
	scanf("%s", nom_sup);

 trouve = 0;
for(int i = 0; i < personne; i++) {
	if(strcmp(A.nom[i], nom_sup) == 0) {
		for(int j = i; j < personne - 1 ; j++) {
			strcpy(A.nom[j], A.nom[j + 1]);
						strcpy(A.adress_email[j], A.adress_email[j + 1]);
							strcpy(A.numero[j], A.numero [ j + 1]);
		}
		personne--;
		printf("Le contact ete supprimer avec succes \n");
		trouve = 1;
		break;
	}
	
		 }
	if (!trouve) {
	printf("Contact introuvable");
}
case 0 :
	printf("Au revoir. \n");
	menu = 5;
	break ;
	default : 
	printf("Choix invalide. \n");
}
}
return 0;	

	}
	
	
	










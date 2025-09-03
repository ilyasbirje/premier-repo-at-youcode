    #include <stdio.h>
    #include <string.h>

    int main() {
    //titre {//Le Journal d'Anne Frank
//Le Rouge et le Noir de Stendhal
//antigone
//et Le Baron perché d'Italo Calvino
//la boit a merveille}
    //auteur
    //prix
    //quantité
    const int MAX = 50;
    const int MAX_livre = 5;
    char titre[MAX_livre][MAX];
    char auteur[MAX_livre][MAX];
    float prix[MAX_livre];
    float quantite[MAX_livre];
    int choix;
    int nombre = 0;
    int i;
    int trouve = 0;
    char recherche[MAX];
    char modif[MAX];
start:
    printf("====================================\n");
    printf("      GESTION DU STOCK DE LIVRES     \n");
    printf("====================================\n");
    printf("1. Ajouter un livre au stock\n");
    printf("2. Afficher tous les livres\n");
    printf("3. Rechercher un livre par titre\n");
    printf("4. Mettre à jour la quantité d'un livre\n");
    printf("5. Supprimer un livre du stock\n");
    printf("6. Afficher le nombre total de livres\n");
    printf("7. Quitter\n");
    printf("====================================\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix);
    if (choix < 1 || choix > 7) {
    printf(" votre choix est impossible");
    goto start;
    } 
    switch(choix) {
case 1:
    if (nombre >= MAX_livre) {
    printf("votre stock plein!");
    goto start;
    }
    printf("Entrer le nom livre : ");
         scanf("%[^\n]", titre[nombre]);
    printf("Entrer le nom de l'auteur : ");
         scanf("%[^\n]", auteur[nombre]);
    printf("Le prix de livre : ");
        scanf(" %f", &prix);
    printf("La quantité de livre : ");
        scanf(" %f", &quantite);
        nombre++;
    goto start;

  
case 2:
 
        if(nombre==0) {
    printf("aucun livre dans ton stock.\n");
    goto start;
    }
        for(i = 0; i < nombre; i++) {
    printf("Titre : %s\n", titre[i]);
    printf("Auteur : %s\n", auteur[i]);
    printf("Prix : %.2f\n", prix[i]);
    printf("Quantité : %.2f\n", quantite[i]);
    printf("------------------------------------\n");
    }
    goto start;
case 3:
    printf("le nom de livre : ");
    scanf("%s", recherche);
    if(nombre==0){
    printf("aucun livre dans ton stock.\n");
    goto start;
    }
        for(i = 0; i < nombre;i++) {
    if(strcmp(titre[i], recherche)==0) {
    printf("Le livre est trouvé");
    printf("Le livre que vous cherchez est : %s \n son auteur est %s \n, le prix : %.2f \n la quantité : %.2f \n", titre[i], auteur[i], prix[i], quantite[i]);

                trouve = 0;
            }
        }
case 4:
        if(nombre == 0) {
            printf("Aucune livre pour le modifier : \n");
            goto start;
        }
printf("Cree une nouveau quantité :");
scanf("%s", modif);
for(int i = 0; i < nombre; i++) {
    if(strcmp(titre[i], modif)==0) {
printf("Ancien quantité : %.2f :\n", quantite);
scanf(" %f", &quantite[i]);
printf("Quantit mise a jour avec succes ! \n");
trouve = 1;
break;
            }
        }
} 


}if (!trouve/* !=contraire si = 1 alors trouve = 0*/){
    printf("livre non trouver");
        return 0;
    }
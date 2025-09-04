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
    float  modif;
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
         scanf(" %s", titre[nombre]);
    printf("Entrer le nom de l'auteur : ");
         scanf(" %s", auteur[nombre]);
    printf("Le prix de livre : ");
        scanf(" %f", &prix[nombre]);
    printf("La quantité de livre : ");
        scanf(" %f", &quantite[nombre]);
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
                goto start;

case 4:
trouve = 0;
        if(nombre == 0) {
            printf("Aucune livre pour le modifier : \n");
            goto start;
        }
printf("Entre le titre de livre pour changer son quantité : ");
scanf(" %s", &recherche);

for(int i = 0; i < nombre ;i++) {
    if(strcmp(titre[i], recherche)==0) {
    trouve = 1;
printf("Cree une nouveau quantité :");
scanf("%f", &modif);
    //afficher ancien quantiy
    printf("Ancien quantité : %.2f \n", quantite[i]);
    // modifier quantité[i] avec modif
    quantite[i]=modif;
    //affichr titre + nouveau quantite
    printf("Le titre : %s & Nouveau Quantité %.2f", titre[i], quantite[i]);
    
    }
}
if(trouve == 0){
    printf("livre non trouver");
}

goto start;
            
} 
        return 0;
    }

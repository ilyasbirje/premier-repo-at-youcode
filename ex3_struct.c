//rectangle 
//x * y = lair
//structure,
//une fonction prend une variable de cette structure .

#include <stdio.h>


struct air {
    
  float longeur;
  float largeur;
 
};

float calculair(struct air a){
    return a.longeur * a.largeur;
    
}

int main() {
    
    struct air A ;
    
    printf("Longeur : ");
    scanf("%f", &A.longeur);
     printf("Longeur : ");
    scanf("%f", &A.largeur);

    float air = calculair(A);


printf("%.2f", air);
    
    return 0;
}

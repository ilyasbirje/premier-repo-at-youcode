// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    
    char name1[20];
    char name2[20];
printf("le premier nom :");
scanf("%s", name1);
    printf("le deuxieme nom :");
scanf("%s", name2);
    strcat(name1,name2);
printf("%s", name1);    
    
    return 0;
}
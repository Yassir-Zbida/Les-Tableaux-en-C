#include<stdio.h>

int main() {
    int Tab[100];
    int i , Taille, element , F = 0 ;
    printf("Veuillez saisir La Taille De Tableau :");
    scanf("%d",&Taille);
    for (i = 0; i <Taille; i++) {
        printf("Tab[%d] = ", i+1);
        scanf("%d", &Tab[i]);
    }
    printf("Donner l'element a rechercher dans votre Tableau :");
    scanf("%d",&element);

    for (i=0 ; i<5 ; i++){
         if(Tab[i] == element){
            F++ ;
         }
        }
    if(F>0){
        printf("l'element %d est present %d fois dans le tableau .",element,F);
    }
    else{
        printf("l'element %d est  non present dans le tableau .",element);
    }

    return 0;
}

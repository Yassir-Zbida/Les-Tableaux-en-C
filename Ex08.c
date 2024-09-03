#include<stdio.h>

int main() {
    int Tab1[100], Tab2[100];
    int i , Taille  ;
    printf("Veuillez saisir La taille de tableau :");
    scanf("%d", &Taille);
    for (i = 0; i < Taille; i++) {
        printf("Tab1[%d] = ", i+1);
        scanf("%d", &Tab1[i]);
    }
    for (i=0 ; i<Taille ; i++){
         Tab2[i] = Tab1[i] ;
        }

    printf("Vote Nouveau Tableau copie est :\n");
    for(i=0; i<Taille ; i++){
        printf("Tab2[%d] = %d \n", i+1, Tab2[i]);
    }
    printf("Vote ancien Tableau copie est :\n");
    for(i=0; i<Taille ; i++){
        printf("Tab1[%d] = %d \n", i+1, Tab1[i]);
    }

    return 0;
}

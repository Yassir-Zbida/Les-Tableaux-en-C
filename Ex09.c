#include<stdio.h>

int main() {
    int Tab1[5], Tab2[5];
    int i  ;
    printf("Veuillez saisir Les Valeurs d'elements de votre Tableau :\n");
    for (i = 0; i <5; i++) {
        printf("Tab1[%d] = ", i+1);
        scanf("%d", &Tab1[i]);
    }

    for (i=0 ; i<5 ; i++){
         Tab2[i] = Tab1 [4-i] ;
        }

    printf("Vote Tableau inverse est :\n");
    for(i=0; i<5 ; i++){
      printf("Tab2[%d] = %d \n", i+1,Tab2[i]);
    }

    return 0;
}

#include<stdio.h>

int main() {
    int Tab[100];
    int i , j , Taille , temp ;
    printf("Veuillez saisir La taille de tableau :");
    scanf("%d", &Taille);
    for (i = 0; i < Taille; i++) {
        printf("Tab[%d] = ", i + 1);
        scanf("%d", &Tab[i]);
    }
    for (i=0 ; i<Taille ; i++){
        for (j=i+1 ; j<Taille ; j++){
            if(Tab[i]>Tab[j]){
                temp = Tab[i];
                Tab[i] = Tab[j] ;
                Tab[j] = temp ;
            }
        }
    }
    printf("Tableau trie en ordre croissant:\n");
    for(i=0; i<Taille ; i++){
        printf("Tab[%d] = %d \n", i+1, Tab[i]);
    }

    return 0;
}

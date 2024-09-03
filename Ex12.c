#include<stdio.h>

int main() {
    int Tab[100];
    int i , Taille ;
    printf("Veuillez saisir La Taille De Tableau :");
    scanf("%d",&Taille);
    for (i = 0; i <Taille; i++) {
        printf("Tab[%d] = ", i+1);
        scanf("%d", &Tab[i]);
    }
    printf("Les elements pairs du tableau sont:\n");
    for (i=0 ; i<Taille ; i++){
         if(Tab[i] % 2 == 0 ){
            printf("Tab[%d] = %d \n", i+1 , Tab[i]);
         }
        }
    return 0;
}

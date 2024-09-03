#include<stdio.h>

int main() {
    int Tab[100];
    int i , Taille, Remplace , New ;
    printf("Veuillez saisir La Taille De Tableau :");
    scanf("%d",&Taille);
    for (i = 0; i <Taille; i++) {
        printf("Tab[%d] = ", i+1);
        scanf("%d", &Tab[i]);
    }
    printf("Donner la valeur a remplacer dans votre Tableau :");
    scanf("%d",&Remplace);
    printf("Donner la nouvelle valeur a remplacer :");
    scanf("%d",&New);

    for (i=0 ; i<Taille ; i++){
         if(Tab[i] == Remplace){
            Tab[i] = New ;
         }
        }
    printf("Les Nouveaux valeurs de votre Tableau sont :\n");
    for(i=0; i<Taille ; i++){
        printf("Tab[%d] = %d\n",i+1 , Tab[i]);
    }

    return 0;
}

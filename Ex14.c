#include<stdio.h>

int main() {
    int Tab[100];
    int i , Taille  , Somme=0  ;
    float Moyenne=0 ;
    printf("Veuillez saisir La Taille De Tableau :");
    scanf("%d",&Taille);
    for (i = 0; i <Taille; i++) {
        printf("Tab[%d] = ", i+1);
        scanf("%d", &Tab[i]);
        Somme = Somme + Tab[i];
    }
    Moyenne = Somme / Taille ;
    printf("La moyenne des elements du tableau est: %.2f\n", Moyenne);
    return 0;
}

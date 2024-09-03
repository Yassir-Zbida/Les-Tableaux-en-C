#include<stdio.h>

int main() {
    int Tab1[100], Tab2[100] ;
    int i , Taille1 , Taille2 , Taille ;
    printf("Veuillez saisir La Taille De Tableau 1 :");
    scanf("%d",&Taille1);
    printf("Veuillez saisir les elements de tableau 1 :\n");
    for (i = 0; i <Taille1; i++) {
        printf("Tab1[%d] = ", i+1);
        scanf("%d", &Tab1[i]);
     }
    printf("Veuillez saisir La Taille De Tableau 2 :");
    scanf("%d",&Taille2);
    printf("Veuillez saisir les elements de tableau 2 :\n");
    for (i = 0; i <Taille2; i++) {
        printf("Tab2[%d] = ", i+1);
        scanf("%d", &Tab2[i]);
     }

    Taille = Taille1 + Taille2 ;
    int Tab3[Taille];
    for (i = 0; i < Taille1; i++) {
        Tab3[i] = Tab1[i] ;
    }
    for (i = 0; i < Taille2; i++) {
        Tab3[Taille1 + i] = Tab2[i];
    }

    printf("le tableau fusionne\n");
    for(i=0 ; i<Taille ; i++){
    printf("Tab fusionne [%d] = %d\n",i+1,Tab3[i]);
    }
    return 0;
}

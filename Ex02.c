#include<stdio.h>
int main() {

int Tab[100] ;
int i , Taille ;
printf("Veuillez saisir La taille de tableau :");
scanf("%d", &Taille);
for (i=0 ; i<Taille ; i++){
    printf("Tab[%d] = ",i+1);
    scanf("%d",&Tab[i]);
}
printf("Votre Tableau :\n");
for (i=0 ; i<Taille ; i++){
    printf("Tab[%d] = %d \n",i+1,Tab[i]);
}

return 0 ;
}

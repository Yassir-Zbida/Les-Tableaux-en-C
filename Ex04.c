#include<stdio.h>
int main() {

int Tab[100] ;
int i , Taille , Max ;
printf("Veuillez saisir La taille de tableau :");
scanf("%d", &Taille);
for (i=0 ; i<Taille ; i++){
    printf("Tab[%d] = ",i+1);
    scanf("%d",&Tab[i]);
}
Max = Tab [0];
for (i=1 ; i<Taille ; i++){
    if(Max<Tab[i]){
        Max = Tab [i];
    }
}
printf("Le Miximum De Votre Tableau est : %d\n",Max);

return 0 ;
}

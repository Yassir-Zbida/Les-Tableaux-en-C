#include<stdio.h>
int main() {

int Tab[100] ;
int i , Taille , Min ;
printf("Veuillez saisir La taille de tableau :");
scanf("%d", &Taille);
for (i=0 ; i<Taille ; i++){
    printf("Tab[%d] = ",i+1);
    scanf("%d",&Tab[i]);
}
Min = Tab [0];
for (i=1 ; i<Taille ; i++){
    if(Min>Tab[i]){
        Min = Tab [i];
    }
}
printf("Le Minimum De Votre Tableau est : %d\n",Min);

return 0 ;
}


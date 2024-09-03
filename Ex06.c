#include<stdio.h>

int main() {
    float Tab[100];
    int i, Taille, Fac_Multipl;
    printf("Veuillez saisir La taille de tableau :");
    scanf("%d", &Taille);
    for (i = 0; i < Taille; i++) {
        printf("Tab[%d] = ", i + 1);
        scanf("%f", &Tab[i]);
    }
    printf("Veuillez saisir le facteur de multiplication :");
    scanf("%d", &Fac_Multipl);
    for (i = 0; i < Taille; i++) {
        Tab[i] = Tab[i] * Fac_Multipl;
    }
    printf("Les nouvelles valeurs des elements du tableau multipliees par %d sont :\n",Fac_Multipl);
    for (i = 0; i < Taille; i++) {
        printf("Tab[%d] = %.2f\n", i + 1, Tab[i]);
    }

    return 0;
}

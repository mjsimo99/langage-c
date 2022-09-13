#include <stdio.h>
#include <stdlib.h>

int main()
{
    int repet ;
    do{
        float T[10];
        int i ;
        float S , P , M;
        printf("saisir les nombre de tableux : \n");
        for( i=0; i<10; i++){
        printf("T[%d]=",i);
        scanf("%f",&T[i]);
        }
        S=0;
        P=1;
        for(i=0;i<10;i++){
        S=S+T[i];
        P=P*T[i];
        }
        M=S/10;
        printf("la somme de contenu total du tableau est %.2f \n",S);
        printf("la produit de contenu total du tableau est %.2f \n",P);
        printf("la moyenne de contenu total du tableau est %.2f \n",M);
        printf("Si vous voulez continuer appuyez sur 1 ,  si vous voulez quitter appuyez sur n'importe quel autre bouton : ");
        scanf("%d", &repet);
    }while(repet == 1);

    return 0;
}

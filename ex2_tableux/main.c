#include <stdio.h>
#include <stdlib.h>

int main()
{
    float U[3] , V[3] ;
    int i ;
    float P , C ;
    printf("saisir les nombre des premier tableux : \n");
    for(i=0;i<3;i++){
        printf("U[%d]= ",i);
        scanf("%f",&U[i]);}
        for(i=0;i<3;i++){
        printf("V[%d]= ",i);
        scanf("%f",&V[i]);
    }
    P=0 ;
    for(i=0;i<3;i++){
        P=P+U[i]*V[i];

    }
    printf("la produit de deux tablaux est  : %.2f \n", P);
    return 0;
}

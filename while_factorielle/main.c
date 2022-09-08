#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    float F, i ;
    do{
    printf("saisir la nombre : ");
    scanf("%d",&N);
    }while(N<0);
    F=1;

    if(N>0){
        for(i=2;i<=N;i++){

            F=F*i;
    }
    printf("la factorielle de %d est : %.2f",N,F);

    }
    else if (N==0)
        printf("la factorille est : 1 " );
    else
        printf("Veuillez entrer un nombre");

    return 0;
}

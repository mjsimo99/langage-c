#include <stdio.h>
#include <stdlib.h>

int main()
{
    int reponse ;
    do{




    int N;
    float F, i ;
    do{
    printf("saisir la nombre : ");
    scanf("%d",&N);
    }while(N<0);
    F=1;

    if(N>0){
        i=2;
        while(i<=N){

            F=F*i;
            i++;
    }
    printf("la factorielle de %d est : %.2f \n",N,F);

    }
    else if (N==0)
        printf("la factorille est : 1 \n" );
    else
        printf("Veuillez entrer un nombre \n");

    printf("Pour un autre processus appuyez sur '1' Pour quitter  appuyez sur n'importe quel autre bouton : ");
    scanf("%d",&reponse);

     }while(reponse == 1);

    return 0;
}

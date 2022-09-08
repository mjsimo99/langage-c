#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op ;
    float N1,N2;
    printf("saisir le primier nombre \n");
    scanf("%f",&N1);
    printf("saisir la deuxieme nombre \n");
    scanf("%f",&N2);
    printf("saisir l'operation \n");
    scanf(" %c",&op);
    switch(op){
    case '+' :
        printf("N1 + N2 = %.2f",N1+N2);
    break;
    case '-' :
        printf("N1 - N2 = %.2f",N1-N2);
    break;
    case '*' :
        printf("N1 * N2 = %.2f",N1*N2);
    break;
    case '/' :
        printf("N1 / N2 = %.2f",N1/N2);
    break;
    default :
        printf("incorrect operation");





    }

    return 0;
}

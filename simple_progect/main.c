#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,S,SS,P,DIV; //les variable
    printf("Entrer First Number :\n"); // message de nombre 1
    scanf("%d",&A);//saisir le nombre 1
    printf("Entrer Second Number :\n");// message de nombre 2
    scanf("%d",&B);//saisir le nombre 2

    S=A+B;//la somme de nombre a et b
    SS=A-B;//la soustraction de nobre a et b
    P=A*B;//la multiplication de nombre a et b
    DIV=A/B;// la division des nombre a et b
    printf("%d + %d = %d \n",A,B,S);
    printf("%d - %d = %d \n",A,B,SS);
    printf("%d * %d = %d \n",A,B,P);
    printf("%d / %d = %d \n",A,B,DIV);

    return 0;
}

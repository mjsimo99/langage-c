#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,S,SS,P,DIV;
    printf("Entrer First Number :\n");
    scanf("%d",&A);
    printf("Entrer Second Number :\n");
    scanf("%d",&B);

    S=A+B;
    SS=A-B;
    P=A*B;
    DIV=A/B;

    printf("%d + %d = %d \n",A,B,S);
    printf("%d - %d = %d \n",A,B,SS);
    printf("%d * %d = %d \n",A,B,P);
    printf("%d / %d = %d \n",A,B,DIV);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,S;//les variable
    printf(" TABLE SOMME DE LA NOMBRE :");//message affiche
    scanf("%d",&N);//la nombre saisir
    for(i=1;i<10;i++){ //la boucle for

    S=N+i; //l'opperation
    printf("%d + %d = %d \n ",N,i,S);}//rusultat qui affiche
    return 0;
}

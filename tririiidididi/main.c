#include <stdio.h>
#include <stdlib.h>

int main()
{
int reponse ;
do{

    int n ;
    int i , j ;
    printf("saisir la nombre de ligne : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        for(j=n-i;j>=1;j--)
            printf(" ");

        for(j=1;j<=i+i-1;j++)
        printf("*");
        printf("\n");
    }
    printf("Pour une autre expérience appuyez sur'1' Pour quitter  appuyez sur n'importe quel autre number : ");
    scanf("%d",&reponse);

     }while(reponse == 1);
     return 0;
}

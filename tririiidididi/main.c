#include <stdio.h>
#include <stdlib.h>
    int i , j , r;

void repeti(int n , int x){


       for(i=0;i<n;i++){

            for(j=n-i+x;j>0;j--)
            printf(" ");

            for(j=1;j<=2*i+1;j++)
            printf("*");
            printf("\n");
    }
}
int main()
{
int reponse ;
do{

    int n , bb , aa ;

    printf("saisir la nombre de ligne : ");
    scanf("%d",&n);

    for(r=n-1;r>=0;r--){
    repeti(n++,r);
    }
    for(int bb = 0;bb<4;bb++){
        for( int aa = 0; aa < n-1; aa++)
            printf(" ");
        printf("*\n");
    }

    printf("Pour une autre experience appuyez sur'1' Pour quitter  appuyez sur n'importe quel autre number : ");
    scanf("%d",&reponse);

     }while(reponse == 1);


     return 0;
}

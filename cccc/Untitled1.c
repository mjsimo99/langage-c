#include <stdio.h>
#include <stdlib.h>
int  nr,a,i,c,k;
void drawTriangle (int L,int nr)
{
    for(a=1;a<=nr;a++){

    for(i=1;i<=L;i++){
        for(k=1;k<=L-i;k++){
            printf(" ");
        }
        for(c=1;c<=i*2-1;c++){
            printf("*");
        }
        printf("\n");
    }
}
}


int main()
{
    int L,nr,a;
    int i,c,k;
    printf("veuillez entrer la valeur L : ");
    scanf("%d",&L);
    printf("donne moi le neveau :");
    scanf("%d",&nr);

    drawTriangle(L, nr);
    return 0;
}

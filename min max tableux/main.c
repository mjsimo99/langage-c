#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10] ;
    int i , min , max ;
    printf("saisir les nombre des premier tableux : \n");
    for(i=0;i<10;i++){
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
        }
    min = T[0];
    for(i=1;i<10;i++){
        if(min>T[i])
        min = T[i];
    }
    printf("min de tableux est  : %d \n",min);
    max = T[1];
    for(i=0;i<10;i++){
        if(max<T[i])
        max = T[i];
    }
    printf("max de tableux est  : %d ",max);



return 0;
}

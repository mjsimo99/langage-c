#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10];
    int min1 , min2 ;
    int i;
    printf("saisir les element de tableau : \n");
    for(i=0;i < 10 ; i++){
        printf("T[%d] = " ,i+1);
        scanf("%d",&T[i]);
    }
    min1=T[0];
    min2=T[0];
    for(i=1;i<10;i++){
        if(T[i]<min1){
            min2 = min1 ;
            min1 = T[i];
        }
        if(T[i]<min2 && T[i]>min1){
            min2 = T[i];
        }
    }
    printf("le premier plus petit element est : %d \n ", min1);
    printf("le deuxieme plus petit534 element est : %d \n ", min2);

    return 0;
}

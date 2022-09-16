#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , i=0;
    printf("enter la taille du tableau : ");
    scanf("%d",&x);

    int *TDynamique = malloc (x*sizeof(int));


    for(i=0;i<x;i++){
    for(i=0;i<x;i++){
        printf("entrer le nombre %d : ",i+1);
        scanf("%d",&TDynamique[i]);
    }
    for(i=0;i<x;i++)
    {
        printf("\n %d",TDynamique[i]);
    }
    }
    free(TDynamique);
    for(i=0;i<x;i++)
    {
        printf("\n %d",TDynamique[i]);
    }
    return 0;
}

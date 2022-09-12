
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ;
    int i , j ;
    printf("saisir la nombre de ligne : ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        {
        for(j=1;j<=i;j++){
            printf("  * ");
        }
        printf("  \n");
    }

    return 0;
}

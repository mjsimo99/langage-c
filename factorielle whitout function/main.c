#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i , F ;
    printf("Enter le nombre : ");
    scanf("%d",&n);
    F=1;
    for(i=1;i<=n;i++)
    F=F*i;

    printf("factorielle %d = %d ", n,F);



    return 0;
}

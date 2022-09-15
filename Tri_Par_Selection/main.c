#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  i , j , min , perm ;
    int T[100];
    int n=10 ;
    printf("donner la dimension : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }



    for(i=0;i<n-1;i++)
    {
        min=i;

        for(j=i+1;j<n;j++)
        {
            if(T[j]<T[min])
            {
            perm=T[j];
            T[j]=T[min];
            T[min]=perm;
            }
        }
    }
    printf("apres le tri violla tableau : \n");
    for(i=0;i<n;i++)
        printf("T[%d]=%d \n", i,T[i]);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
void TriParSelection(int T[100],int n)
{

    int i , j , perm , min ;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(T[j]>T[min])
            min=j;
        }
            if(min!=i)
            {
                perm=T[i];
                T[i]=T[min];
                T[min]=perm;
            }

    }
}
int main()
{
    int T[5] , n ,i ;
    printf("saisir la dimention : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
        TriParSelection(T,n);

        printf("voilla le tri \n");
    for(i=0;i<n;i++)
        printf("T[%d]=%d \n",i,T[i]);


return 0;
}

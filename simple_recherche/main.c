#include <stdio.h>
#include <stdlib.h>

int rechercheSimple(int x , int *T,int n)
{
    int i ;
    for(i=0;i<n;i++)
    if(x == T[i])
        return i ;


        return -1;


}
int main()
{
    int T[5]={5,2,9,6,0};
    int x ;
    printf("saisir le nombre saisir : ");
    scanf("%d",&x);

    printf("%d",rechercheSimple(x,T,5));
return 0;
}

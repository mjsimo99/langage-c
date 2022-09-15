#include <stdio.h>
#include <stdlib.h>
int dichotomique(int T[],int x , int debut , int fin)
{
    int mill ;
    if (debut>fin)
        return -1 ;
    else
    {
        mill = (debut+fin)/2;
        if  (T[mill]==x)
        return mill;
        else if (T[mill]>x)
        return dichotomique(T,x,debut,mill-1);
        else
        return dichotomique(T,x,mill+1,fin);
    }
}
int main()
{
    int T[]={1,2,3,4,5,6,7,8,9,10};
    int x ;
    printf("saisir un nobmre dans la tableau : ");
    scanf("%d",&x);
    printf("%d",dichotomique(T,x,0,9));
    return 0;
}

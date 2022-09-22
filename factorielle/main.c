#include <stdio.h>
#include <stdlib.h>
int factorielle(int F , int n){
   int   i  ;

    F=1;
    for(i=1;i<=n;i++)
    F=F*i;
    return F ;
}
int main()
{
int   n ;
printf("Enter un nombre : ");
scanf("%d",&n);

F=factorielle(F , n);

printf("la factorielle de  %d = %d",n,F);
    return 0;
}

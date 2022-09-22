#include <stdio.h>
#include <stdlib.h>
int facto(int n)
{
    int i ;
   if ( n != 0)
      return  n*facto(n - 1);
   else
        return 1;
    }

int main()
{
int  n ;
printf("Enter un nombre : ");
scanf("%d",&n);


printf("la factorielle de  %d est %d" ,n,facto(n));
    return 0;
}

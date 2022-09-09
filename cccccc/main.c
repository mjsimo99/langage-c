#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int d,i,j;
    printf ("combien de ligne ");
    scanf ("%d",&d);
    for (i=d+1;i>1;i--)
    {
        for (j=0;j<i-1;j++)
        {
            printf(" ");
        }
        printf(" *\n");
    }
    return 0;
}

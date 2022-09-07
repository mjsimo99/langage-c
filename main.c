#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1,N2;
    float S ;
    printf("Enter the first number :");
    scanf("%d",&N1);
    printf("Enter the second number :");
    scanf("%d",&N2);
    S=N1*N2;
    printf("The result of multiplication is : %.2f \n",S) ;
    return 0;
}

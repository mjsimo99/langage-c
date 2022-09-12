#include <stdio.h>
#include <stdlib.h>
void  signe(int A , int B){
    if(A*B>0)
        printf("les valeurs de A et B on le meme signe \n");
    else
        printf("les valeurs de A et B on des signe differents \n");
    }
int  minimum(int A , int B){
int min ;
    if(A>B){
        min = B ;
    return B ; }
    else{
        min=A ;
    return A ;
}}
int  maximum(int A , int B){
int max ;
if (A>B){
        max = A ;
    return A ;}
    else{
        max=B ;
    return B ;
}}
int main()
{
    int max , min ;
    int A , B ;
    printf("veller saisir la valeur de A ");
    scanf("%d",&A);
    printf("veller saisir la valeur de B ");
    scanf("%d",&B);
    signe(A,B);
    min = minimum(A,B);
    max = maximum(A,B);
    printf("la valeur minimale est : %d \n", min);
    printf("la valeur maximale est : %d \n", max);
    return 0;
}

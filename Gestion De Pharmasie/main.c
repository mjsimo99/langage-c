#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static i ;
typedef struct produit{
int code ;
char nome[30];
int quantite ;
float prix ;

}produit;

produit a[1000];
//function
void ajouter_produit(produit a[] , int taille);
void ajouter_autre_produit(produit a[],int taille, int nbp);






//fun
void lister(){







}
int main()
{
int nbp   ;
int c ; //choisir
int taille ;
int *p ;
p=&taille;
int close = 0 ;
//menu
    while(close == 0){
    puts("                              --------------------- MENU ---------------------\n");
    puts("                              *              1-Ajouter un produit.           *\n");
    puts("                              *              2-Ajouter un autre produit.     *\n");
    puts("                              *              4-Lister les produit.           *\n");
    puts("                              *              5-Acheter les produit.          *\n");
    puts("                              *              6-Rechercher un produit.        *\n");
    puts("                              *              7-Supprimer les produit.        *\n");
    puts("                              *              8-Total de produit.             *\n");
    puts("                              *              9-Moyenne de produit.           *\n");
    puts("                              *              10-Quitter le programme.        *\n");
    puts("                              ------------------------------------------------\n");
do{
  printf("                              =>Faire un choix : ");
  scanf("%d",&c);
  printf("\n");
    if(c>10 ||c<1)
    puts("                              Vous devez choisir un nombre entre 1 et 9 !!");
}while(c>10 ||c<1);
    system("cls");
    switch(c)
    {
        case 1:{
            ajouter_produit(a,taille);
            (*p)++;

            printf("%d\n",taille);
        }break;
        case 2:{
            do{
            printf("saisir la nombre des produit : ");
            scanf("%d",&nbp);
            if(nbp>100 ||nbp<1)
        puts("Vous devez choisir entre 1 et 100");

}while(nbp>100 || nbp<1);
ajouter_autre_produit(a,taille,nbp);
            taille+=nbp;
            printf("%d\n",taille);

        }break;
        case 3:{
        }break;
        case 4:{
        }break;
        case 5:{
        }break;
        case 6:{
        }break;
        case 7:{
        }break;
        case 8:{
        }break;
        case 9:{
        }break;
        case 10:{
            close = 1;
        }break;
    }
    }
    return 0;
}
//function ajout un produit num 1 dans la menu
void ajouter_produit(produit a[] , int taille)
{
    printf("Donner des informations sur le produit qui ajouter . \n");
    printf("nom de produit : ");
    scanf("%s",&a[taille].nome);
    printf("code de produit : ");
    scanf("%d",&a[taille].code);
    printf("choiser la quantite que vous voulez : ");
    scanf("%d",&a[taille].quantite);
    printf("Entrez le prix du produit : ");
    scanf("%f",&a[taille].prix);




}

//function ajout un autre produit num 2 dans la menu
void ajouter_autre_produit(produit a[],int taille, int nbp)
{
printf("%d\n", taille);
for(i=taille;i<taille+nbp;i++)
{
    printf("nom de produit %d : ",i);
    scanf(" %s",a[taille].nome);
    printf("code de produit : ");
    scanf("%d",&a[taille].code);
    printf("choiser la quantite que vous voulez : ");
    scanf("%d",&a[taille].quantite);
}

}
void afficher (){
    /*
    printf("la liste de produit choisir est : ");
for(i=1;i<=nbp;i++){
    printf("produit numero %d & nom=%s & code=%d & quantite =%d \n",i,a[i].nome,a[i].code,a[i].quantite);
}
*/
}

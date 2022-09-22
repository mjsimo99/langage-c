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
void afficher(produit a[],int taille);





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
    puts("                              *              3-afficher les produit.         *\n");
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
            taille++;

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
            afficher(a,taille);



        }break;
        case 4:{
            //TRI_alphabétique(a,prix_ttc ,taille);
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
for(i=taille;i<nbp;i++)
{
    printf("nom de produit %d : ",i+1);
    scanf(" %s",a[taille].nome);
    printf("code de produit : ");
    scanf("%d",&a[taille].code);
    printf("choiser la quantite que vous voulez : ");
    scanf("%d",&a[taille].quantite);
    printf("Entrez le prix du produit : ");
    scanf("%f",&a[taille].prix);
}

}
void afficher(produit a[],int taille){
    system("cls");
for(i=0;i<taille;i++){
    printf("les information des  produits %d  \n",i+1);
    printf("le nome de produit %s \n", a[i].nome);
    printf("code de produit  : %d \n",a[i].code);
    printf("la quantite de produit : %d \n",a[i].quantite);
    printf("le prix du produit est : %f \n",a[i].prix);
    printf("-------------------------------------\n");

}


}
//**********function order ASC*******
/*
void  TRI_alphabétique(produit a[],int prix_ttc , int taille){
    int i,j;
    float prix_TTC;
    produit new;

    for (i = 0; i < taille- 1; i++)
    {
        for (j = i + 1; j < taille; j++){

            if (CB[j].prix < CB[i].prix)
            {
                new=a[i];
                a[i]=a[j];
                a[j]=new;

            }
        }
    }
}
//**********function order desc*******
/*
void SortedDesc()
{
    int i,j;
    float Money;
    BankAccount new;
    for (i = 0; i < allAccounts - 1; i++)
    {
        for (j = i + 1; j < allAccounts; j++){

            if (CB[j].Money > CB[i].Money)
            {
                new=CB[i];
                CB[i]=CB[j];
                CB[j]=new;
            }
        }
    }
}
*/

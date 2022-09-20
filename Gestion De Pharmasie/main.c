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
typedef struct achat {
    char name[100];
    char time[100];
    float priTTC;
}achat;

produit a[1000];
//function
void ajouter_produit(produit a[] , int taille);
void ajouter_autre_produit(produit a[],int taille, int nbp);
void afficher(produit a[],int taille);
void TRI_PAR_alphabetique(produit a[],int taille);
void  TRI_PAR_PRIX(produit a[],int taille);
void Acheter_produit(produit a[], int taille);
void recherch_CODE(produit a[],int taille );
void recherch_Quantite(produit a[],int taille );
void Etat_du_stock( produit a[],int taille );



int main()
{
int nbp   ;
int c ; //choisir
int taille ;
int close = 0 ;
int q , b;
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
        case 1:
            ajouter_produit(a,taille);
            taille++;

            printf("%d\n",taille);
            break;
        case 2:
            do{
            printf("saisir la nombre des produit : ");
            scanf("%d",&nbp);
            if(nbp>100 ||nbp<1)
            puts("Vous devez choisir entre 1 et 100");

            }while(nbp>100 || nbp<1);
            ajouter_autre_produit(a,taille,nbp);
            taille+=nbp;
            printf("%d\n",taille);
            break;
        case 3:
            afficher(a,taille);
            break;
        case 4:
                printf("Choisissez-en 1 pour TRI alphabetique  \n");
                printf("Choisissez-en 2 pour TRI avec prix  \n ");
                printf("              => Faire un choix : ");
                scanf("%d",&q);
                switch(q)
                {

                    case 1 :
                        TRI_PAR_alphabetique(a,taille);
                        break;
                    case 2 :
                         TRI_PAR_PRIX(a,taille);
                        break;
                }
        break;


        case 5:
                Acheter_produit(a,taille);
        break;
        case 6:
            printf("Choisissez-en 1 pour RECHERCHE PAR CODE  \n");
            printf("Choisissez-en 2 pour RECHERCHE PAR QUANTITE  \n ");
            printf("              => Faire un choix : ");
            scanf("%d",&b);
                switch(b)
                {

                    case 1 :
                        recherch_CODE(a,taille );
                        break;
                    case 2 :
                        recherch_Quantite(a,taille);
                        break;
                }
        break;
        case 7:
            Etat_du_stock(a,taille );
        break;
        case 8:
        break;
        case 9:
        break;
        case 10:
            close = 1;
        break;
    }

    }
    return 0;
}
//**************************************************
//function ajout un produit num 1 dans la menu
void ajouter_produit(produit a[] , int taille)
{
    printf("Donner des informations sur le produit qui ajouter . \n");
    printf("nom de produit : ");
    scanf("%s",&a[i].nome);
    printf("code de produit : ");
    scanf("%d",&a[i].code);
    printf("choiser la quantite que vous voulez : ");
    scanf("%d",&a[i].quantite);
    printf("Entrez le prix du produit : ");
    scanf("%f",&a[i].prix);


}
//**************************************************
//function ajout un autre produit num 2 dans la menu
void ajouter_autre_produit(produit a[],int taille, int nbp)
{

printf("%d\n", taille);
for(i=taille;i<taille+nbp;i++)
{
    printf("nom de produit %d : ",i+1);
    scanf(" %s",a[i].nome);
    printf("code de produit : ");
    scanf("%d",&a[i].code);
    printf("choiser la quantite que vous voulez : ");
    scanf("%d",&a[i].quantite);
    printf("Entrez le prix du produit : ");
    scanf("%f",&a[i].prix);
    printf("-------------------------------------\n");


}
    system("cls");

}
//**************************************************
//function affichage
void afficher(produit a[],int taille){
    system("cls");
for(i=0;i<taille;i++){
    printf("les information des  produits %d  \n",i+1);
    printf("le nome de produit %s \n", a[i].nome);
    printf("code de produit  : %d \n",a[i].code);
    printf("la quantite de produit : %d \n",a[i].quantite);
    printf("le prix du produit est : %.2f \n",a[i].prix);
    printf("-------------------------------------\n");
}
}

//**************************************************
//tri
//function order desc

void TRI_PAR_alphabetique(produit a[],int taille){
    int i ,j;
    produit tmp ;
for(i=0 ; i < taille-1 ; i++){
            for(j = i+1 ; j <taille ; j++ ){
        if((strcmp(a[i].nome,a[j].nome))==1){
            tmp = a[i] ;
            a[i] = a[j];
            a[j] = tmp ;
        }
        }
    }
    afficher(a,taille);

}

//function asc prix*******

void TRI_PAR_PRIX(produit a[],int taille){
    int i,j;
    produit tmp ;

    for (i = 0; i < taille-1; i++)
    {
        for (j = i + 1; j < taille; j++){

            if (a[j].prix < a[i].prix)
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;

            }
        }
    }
//affichage de tri
afficher(a,taille);

}
//acheter un produit
/*
void Acheter_produit(produit a[], int taille){
    int i;
    int NPA;

    printf("Entre le code de produit:\n");
    scanf("%d",&a[i].code);
    printf(" Entre Le Nombre Des Produit Que Vous Voulez Acheter:\n");
    scanf("%d",&NPA);
    if(NPA<=a[i].quantite){
    //produit[i].quantite-=r;
    a[i].quantite -= NPA;


    else
    printf("cette la quantite n'existe pas\n");
}
//**************************************************
//acheter un produit
*/
void Acheter_produit(produit a[], int taille){
    int NBA;
    printf("ENTRE LE CODE DE PRODUIT:\n");
    scanf("%d",&a[i].code);
    printf("LE NOMBRE DE PRODUIT QUE VOUS VOULER ACHETER ");
    scanf("%d", &NBA);
    if(NBA<=a[i].quantite)
    a[a[i].code - 1].quantite -= NBA ;
    else
    printf("cette la quantite n'existe pas\n");


}
//**************************************************
//rechercher un produit
//recherche par code
void recherch_CODE(produit a[],int taille )
{
    int i,j;
    int Rc;
    printf("ENTRER LE CODE DE PRODUIT : ");
    scanf("%d",&Rc);
    for(i=0;i<taille;i++)
    {
        if(a[i].code == Rc)
        printf( "LE PROUIT QUE VOUS RECHERCHEZ EST \n NOME :  %s \n CODE : %d \n QUANTITE : %d \n  PRIX : %.2f \n",a[i].nome,a[i].code,a[i].quantite,a[i].prix);
    }
}
//    FONCTION DE RECHERCHER PAR QUANTITE

void recherch_Quantite( produit a[],int taille )
{
    int i,j;
    int Rq;
    printf("ENTRER LA QUANTITE DE PRODUIT  : ");
    scanf("%d",&Rq);
    for(i=0;i<taille;i++)
    {
        if(a[i].quantite == Rq)
        printf( "LE PROUIT QUE VOUS RECHERCHEZ EST \n NOME :  %s \n CODE : %d \n QUANTITE : %d \n PRIX : %.2f \n",a[i].nome,a[i].code,a[i].quantite,a[i].prix);
    }
}
//**************************************************
//function etat du stock
void Etat_du_stock( produit a[],int taille )
{

    for(i=0;i<taille;i++)
    {
        if(a[i].quantite>3)
            {
                printf("les information des  produits %d  \n",i+1);
                printf("le nome de produit %s \n", a[i].nome);
                printf("code de produit  : %d \n",a[i].code);
                printf("la quantite de produit : %d \n",a[i].quantite);
                printf("le prix du produit est : %.2f \n",a[i].prix);
                printf("-------------------------------------\n");
            }
    }

}

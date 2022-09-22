#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
static int i ;
typedef struct {
int code ;
char nom[50];
int quantite ;
float prix ;

}produit;
int moyenne;
typedef struct  {
    int annee, mois, jour;
}Date;
typedef struct  {
    float priTTC;
    Date date;
}achat;

produit a[1000];
static int taille = 0 ;
achat pa[1000];
static int ta = 0;
//function
void ajouter_produit(produit a[]);
void ajouter_autre_produit(produit a[], int nbp);
void afficher(produit a[]);
void TRI_PAR_alphabetique(produit a[]);
void  TRI_PAR_PRIX(produit a[]);
void Acheter_produit(produit a[]);
int recherch_CODE(produit a[]);
void recherch_Quantite(produit a[]);
void Etat_du_stock( produit a[]);
void Alimenter_le_stock(produit a[]);
void Supprimer_les_produits(produit a[]);
void Statistique_de_vente(produit a[]);




int main()
{
int nbp   ;
int c ; //choisir

int close = 0 ;
int q , b;
//menu
    while(close == 0){
puts("\t***********************************    Gestion de Pharmacie    ***********************************\n\n");

    puts("                              ----------------------  MENU  --------------------\n");
    puts("                              *              1-Ajouter un produit.             *\n");
    puts("                              *              2-Ajouter un autre produit.       *\n");
    puts("                              *              3-afficher les produit.           *\n");
    puts("                              *              4-Lister les produit.             *\n");
    puts("                              *              5-Acheter les produit.            *\n");
    puts("                              *              6-Rechercher un produit.          *\n");
    puts("                              *              7-Etat du stock.                  *\n");
    puts("                              *              8-Alimenter le stock.             *\n");
    puts("                              *              9-Supprimer les produits.         *\n");
    puts("                              *              10-Statistique de vente.          *\n");
    puts("                              *              11-Quitter le programme.          *\n");
    puts("                              --------------------------------------------------\n");
do{
  printf("                              =>Faire un choix : ");
  scanf("%d",&c);
  printf("\n");
    if(c>11 ||c<1)
    puts("                              Vous devez choisir un nombre entre 1 et 11 !!");
}while(c>11 ||c<1);
    system("cls");
    switch(c)
    {
        case 1:
            ajouter_produit(a);
            taille++;
            printf("%d\n",taille);
            system("cls");
            break;
        case 2:
puts("\t***********************************    Ajouter plusieur produits    ***********************************\n\n");
            do{
            printf("\t\t=>SAISIR LA NOMBRE DES PRODUIT : ");
            scanf("%d",&nbp);
            if(nbp>100 ||nbp<1)
            puts("\t\tVOUS DEVEZ CHOISIR ENTRE 1 ET 100");

            }while(nbp>100 || nbp<1);
            ajouter_autre_produit(a,nbp);
            taille+=nbp;
            printf("%d\n",taille);
            system("cls");
            break;
        case 3:
            afficher(a);
            getch();
            system("cls");
            break;
        case 4:
puts("\t**************************************    Tri des produit    **************************************\n\n");
                printf("\t\tCHOISISSEZ-EN 1 POUR TRI ALPHABETIQUE  \n");
                printf("\t\tCHOISISSEZ-EN 2 POUR TRI AVEC PRIX  \n ");
                printf("\t\t\t=> Faire un choix : ");
                scanf("%d",&q);
                switch(q)
                {

                    case 1 :
                        TRI_PAR_alphabetique(a);
                        getch();
                        system("cls");
                        break;
                    case 2 :
                         TRI_PAR_PRIX(a);
                        getch();
                        system("cls");
                        break;
                }
        break;


        case 5:
                Acheter_produit(a);
        break;
        case 6:
            puts("\t**************************************    Acheter produit    **************************************\n\n");

            printf("\t\tCHOISISSEZ-EN 1 POUR RECHERCHE PAR CODE  \n");
            printf("\t\tCHOISISSEZ-EN 2 POUR RECHERCHE PAR QUANTITE  \n ");
            printf("\t\t\t=> Faire un choix : ");
            scanf("%d",&b);
                switch(b)
                {

                    case 1 :
                        recherch_CODE(a);
                        getch();
                        system("cls");
                        break;
                    case 2 :
                        recherch_Quantite(a);
                        getch();
                        system("cls");
                        break;
                }
        break;
        case 7:
            Etat_du_stock(a);
            getch();
            system("cls");

        break;
        case 8:
            Alimenter_le_stock(a);
            getch();
            system("cls");

        break;
        case 9:
            Supprimer_les_produits(a);
            getch();
            system("cls");

        break;
        case 10:
            Statistique_de_vente(a);
            getch();
            system("cls");
        break;
        case 11:
            close = 1;
        break;
    }

    }
    return 0;
}
//**************************************************
//function ajout un produit num 1 dans la menu
void ajouter_produit(produit a[] )
{
    puts("\t**************************************    Ajout un produit    **************************************\n\n");
    printf("\t\t=>DONNER DES INFORMATIONS SUR LE PRODUIT QUI AJOUTER . \n");
    printf("\t\t\tnom de produit : ");
    scanf("%s",a[taille].nom);
    printf("\t\t\tcode de produit : ");
    scanf("%d",&a[taille].code);
    printf("\t\t\tchoiser la quantite que vous voulez : ");
    scanf("%d",&a[taille].quantite);
    printf("\t\t\tEntrez le prix du produit : ");
    scanf("%f",&a[taille].prix);



}
//**************************************************
//function ajout un autre produit num 2 dans la menu
void ajouter_autre_produit(produit a[], int nbp)
{
printf("%d\n", taille);
for(i=taille;i<taille+nbp;i++)
{
    printf("\t\t\tnom de produit %d : ",i+1);
    scanf(" %s",a[i].nom);
    printf("\t\t\tcode de produit : ");
    scanf("%d",&a[i].code);
    printf("\t\t\tchoiser la quantite que vous voulez : ");
    scanf("%d",&a[i].quantite);
    printf("\t\t\tEntrez le prix du produit : ");
    scanf("%f",&a[i].prix);
    printf("\t\t\t-------------------------------------\n");


}

}
//**************************************************
//function affichage

void afficher(produit a[]){
system("cls");
puts("\t**************************************    Afficher les produit    **************************************\n\n");

for(i=0;i<taille;i++){
    printf("LES INFORMATION DES  PRODUITS %d  \n",i+1);
    printf("le nom de produit %s \n", a[i].nom);
    printf("code de produit  : %d \n",a[i].code);
    printf("la quantite de produit : %d \n",a[i].quantite);
    printf("le prix du produit est : %.2f \n",a[i].prix);
    printf("-------------------------------------\n");
}

}

//**************************************************
//tri
//function order desc

void TRI_PAR_alphabetique(produit a[]){
    int i ,j;
    produit tmp ;

for(i=0 ; i < taille; i++){
            for(j = i+1 ; j <taille ; j++ ){
        if((strcmp(a[i].nom,a[j].nom))>0){
            tmp = a[i] ;
            a[i] = a[j];
            a[j] = tmp ;
        }
        }
    }
    afficher(a);

}

//function asc prix*******

void TRI_PAR_PRIX(produit a[]){
    int i,j;
    produit tmp ;

    for (i = 0; i < taille; i++)
    {
        for (j = i+1 ; j < taille; j++){

            if (a[j].prix > a[i].prix)
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;

            }
        }

    }
//affichage de tri
afficher(a);

}

//**************************************************
//acheter un produit

void Acheter_produit(produit a[]){
    int NBA;
    int code;
    puts("\t**************************************    Acheter produit    **************************************\n\n");
    printf("\t\t=>ENTRE LE CODE DE PRODUIT : ");
    scanf("%d",&code);

    for(i=0;i<taille;i++)
    {
        if(a[i].code == code)
            {
                printf("\t\t=>LE NOMBRE DE PRODUIT QUE VOUS VOULER ACHETER ");
                scanf("%d", &NBA);
                if(NBA<=a[i].quantite)
                {
                    a[i].quantite -= NBA ;

                    achat temp;
                    float prixTTC = a[i].prix+(a[i].prix*0.15);
                    prixTTC*=NBA;
                    pa[ta].priTTC = prixTTC;
                    time_t t = time(NULL);
                    struct tm tm = *localtime(&t);
                    pa[ta].date.annee = tm.tm_year + 1900;
                    pa[ta].date.mois = tm.tm_mon + 1;
                    pa[ta].date.jour = tm.tm_mday;

                    ta++;//taille achat
                }

                else
                    printf("\t\t\tcette la quantite n'existe pas!!\n\n\n");
            }
    }


}
//**************************************************
//rechercher un produit
//recherche par code
int recherch_CODE(produit a[])
{
    int i,j;
    int Rc;

    printf("\t\t\t=>>entrer le code de produit : ");
    scanf("%d",&Rc);
    for(i=0;i<taille;i++)
    {
        if(a[i].code == Rc)
            {
        printf( "LE PROUIT QUE VOUS RECHERCHEZ EST \n NOM :  %s \n CODE : %d \n QUANTITE : %d \n  PRIX : %.2f \n",a[i].nom,a[i].code,a[i].quantite,a[i].prix);
        return i;
        }
    }
    return -1;
}
//    FONCTION DE RECHERCHER PAR QUANTITE

void recherch_Quantite( produit a[])
{
    int i,j;
    int Rq;
    printf("ENTRER LA QUANTITE DE PRODUIT  : ");
    scanf("%d",&Rq);
    for(i=0;i<taille;i++)
    {
        if(a[i].quantite == Rq)
        printf( "LE PROUIT QUE VOUS RECHERCHEZ EST \n NOM :  %s \n CODE : %d \n QUANTITE : %d \n PRIX : %.2f \n",a[i].nom,a[i].code,a[i].quantite,a[i].prix);
    }
}
//**************************************************
//function etat du stock
void Etat_du_stock( produit a[])
{
    puts("\t**************************************    Etat de stock    **************************************\n\n");
    for(i=0;i<taille;i++)
    {
        if(a[i].quantite<3)
            {
                printf("\t=>LES INFORMATION DES  PRODUITS %d  \n",i+1);
                printf("\t\tle nom de produit %s \n", a[i].nom);
                printf("\t\tcode de produit  : %d \n",a[i].code);
                printf("\t\tla quantite de produit : %d \n",a[i].quantite);
                printf("\t\tle prix du produit est : %.2f \n",a[i].prix);
                printf("\t\t-------------------------------------\n");
            }
    }

}
//**************************************************
//Alimenter le stock
void Alimenter_le_stock( produit a[])
{
    int Al, v;
    puts("\t**************************************    Alimenter le stock    **************************************\n\n");
    printf("\t\t=>CHOISISSEZ LE PRODUIT QUE VOUS SOUHAITEZ AUGMENTER : ");
    scanf("%d", &Al);
    for(i=0;i<taille;i++)
    {
        if(a[i].code == Al)
        {
            printf("\t=>COMBIEN VOULEZ-VOUS AJOUTER DANS LE PRODUIT : ");
            scanf("%d", &v);
            a[i].quantite += v;
            return;
        }

    }
    printf("le produit de ce code ne exist pas dans la list des produit\n");

}
//**************************************************
//Supprimer les produits
void Supprimer_les_produits(produit a[])
{
puts("\t***********************************    Supprimer les produits    ***********************************\n\n");

    int i,j,Dele;
    printf("\t\t=>CHOISISSEZ LE PRODUIT QUE VOUS SOUHAITEZ SUPPRIMER : ");
    scanf("%d", &Dele);


    for (i = 0; i < taille; i++)
    {
        if (a[i].code == Dele)
        {
            for (j = i; j < taille-1; j++)
            {
                a[j] = a[j + 1];
            }
            taille--;
            printf("%d\n",taille);
            getch();

        }
    }
    //afficher(a,taille);
}
void Statistique_de_vente(produit a[])
{
puts("\t***********************************    Statistique de vente    ***********************************\n\n");

    float total = 0, moyen = 0;
    float min = pa[0].priTTC;
    float max = pa[0].priTTC;
    int count = 0; //le nombre de lea produit achat aujourdhui
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
for(i = 0; i < ta; i++)
{
    if(pa[i].date.annee == tm.tm_year + 1900 && pa[i].date.mois == tm.tm_mon + 1 && pa[i].date.jour == tm.tm_mday )
    {
        total += pa[i].priTTC;
        count++;

        if(pa[i].priTTC < min)
        {
            min = pa[i].priTTC;
        }
        if(pa[i].priTTC > max)
        {
            max = pa[i].priTTC;
        }
    }
}
moyen = total/count;

printf("\t\t\t==>le total est %.2f \n", total);
printf("\t\t\t ==>le moyen est %.2f \n", moyen);
printf("\t\t\t  ==>le min est %.2f \n", min);
printf("\t\t\t   ==>le max est %.2f \n", max);
}

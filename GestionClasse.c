#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int jour ;
    int mois ;
    int annee ;
    }date ;
typedef struct{
    char nom[20];
    char prenom[20];
    date dateN ;
    int age ;
}personne ;
void TriTable(personne* T, int size){
    for ( int i = 0 ; i< size-1 ; i++){
            for(int j = i+1 ; j<size ; j++){
                if (T[j].age>T[i].age){
                    personne ech = T[j] ;
                        T[j] = T[i] ;
                        T[i]= ech ;
                }
            }
    }
    for(int i = 0 ; i<size ; i++){

        printf("nom : %s \t prenom : %s \t age : %d ans \n",T[i].nom,T[i].prenom,T[i].age);

}
}
void moyenne(personne* T, int size){
    int Moyenne ,Somme;
    for ( int i = 0 ; i< size ; i++){
        Somme += T[i].age ;
    }
    Moyenne = Somme / size ;
    printf("la moyenne d'age est %d",Moyenne);



    }


int main(){
    int Taille,NTaille ;
    do{
    printf("donner les nombres de personnes ");
    scanf("%d",&Taille);
    printf("\n******************************************\n");
    }while(Taille<=0 || Taille>25 );
    personne *personnes= calloc(Taille,sizeof(personne)) ;

    for(int i = 0 ; i<Taille ; i++){
        printf("Veuillez saisir le prenom de personne numero %d : ",i+1);
        scanf("%s",personnes[i].prenom);
        printf("Veuillez saisir le nom de %s   :",personnes[i].prenom);
        scanf("%s",personnes[i].nom);
        printf("Veuillez saisir la date Naissance de %s: \n",personnes[i].prenom);
        printf("\t ->le jour : ");
        scanf("%d",&personnes[i].dateN.jour);
        printf("\t ->le mois : ");
        scanf("%d",&personnes[i].dateN.mois);
        printf("\t ->l'annee : ");
        scanf("%d",&personnes[i].dateN.annee);
        personnes[i].age = 2021 - personnes[i].dateN.annee;
        printf("age : %d\n",personnes[i].age);
        printf("\n******************************************\n");
    }

        printf("\n\n\n******************************************\n\n\n");
        printf("***********la liste d'eleve***********\n\n\n");
        for(int i = 0 ; i<Taille ; i++){
            printf("nom : %s \t prenom : %s \t age : %d ans \n",personnes[i].nom,personnes[i].prenom,personnes[i].age);
        }
        printf("\n\n**********************************************\n\n\n");
        printf("***********la liste d'information avant le tri avec l'age***********\n\n\n");
        TriTable(personnes,Taille);
        printf("\n\n************************************************************\n");
        printf("***************le plus grand eleve****************\n\n\n");
        printf("%s %s est le plus grand personne dans la liste d'age : %d",personnes[0].prenom,personnes[0].nom,personnes[0].age);
        printf("\n\n************************************************************\n");
        printf("***************le plus grand eleve****************\n\n\n");
        printf("%s %s est le plus petit personne dans la liste d'age : %d",personnes[Taille-1].prenom,personnes[Taille-1].nom,personnes[Taille-1].age);
        printf("\n\n************************************************************\n");
        printf("***************la moyenne d'age des eleves****************\n\n\n");
        int moy ;
        moyenne(personnes,Taille);
            while(reponse=='O' || reponse == 'o'){
            printf("saisir le nombre d'element  ajouter : ");
            scanf("%d",&NTaille);
            Taille = Taille + NTaille ;
            T = realloc(T ,Taille * sizeof(personne));
            printf("saisir les nouvelles valeur \n");
            for (int i = Taille - NTaille ; i< Taille ; i++){
                 printf("Veuillez saisir le prenom de personne numero %d : ",i+1);
        scanf("%s",personnes[i].prenom);
        printf("Veuillez saisir le nom de %s   :",personnes[i].prenom);
        scanf("%s",personnes[i].nom);
        printf("Veuillez saisir la date Naissance de %s: \n",personnes[i].prenom);
        printf("\t ->le jour : ");
        scanf("%d",&personnes[i].dateN.jour);
        printf("\t ->le mois : ");
        scanf("%d",&personnes[i].dateN.mois);
        printf("\t ->l'annee : ");
        scanf("%d",&personnes[i].dateN.annee);
        personnes[i].age = 2021 - personnes[i].dateN.annee;
        printf("age : %d\n",personnes[i].age);
        printf("\n******************************************\n");
        }








    return 0;
}

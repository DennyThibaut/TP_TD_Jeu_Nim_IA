#include <stdio.h>
#include <stdlib.h>
#define TotalAllumettes 21
int tour_IA(int NbAllumettesPrises, int ResteAllu,int win);
int joueur (int NbAllumettesPrises,int ResteAllu,int win);

int main()
{
    int ChoixJoueur = 0;
    int choixIa =0;
    int ResteAllu = 21;
    int Jeu = 21;
    int win=0;

    do{
        printf ("Tour joueur\n");
        Jeu = Jeu - joueur(ChoixJoueur,ResteAllu,win);
        printf("Il reste %i Allumettes en jeu\n\n",Jeu);
        printf ("Tour IA\n");
        ResteAllu = Jeu;
        system("pause");
        Jeu = Jeu - tour_IA (choixIa,ResteAllu,win);
        printf ("Il reste %i Allumettes en jeu\n",Jeu);
    }
    while ((ResteAllu=0));
    if (win==1){
        printf("Bravo! Vous avez gagné!");
    }
    else printf("T es vraiment nul mec ! Retente de jouer ");
    return 0;
}


int tour_IA ( int NbAllumettesPrises, int ResteAllu,int win){

    if (ResteAllu<= TotalAllumettes){
        if ((ResteAllu)%4 == 1){
            NbAllumettesPrises = 3;
            printf("L'IA a retire %d allumettes\n",NbAllumettesPrises);
        }
        else
            NbAllumettesPrises = 1;
            printf("L'IA a retire %d allumettes\n",NbAllumettesPrises);
    }
    if (ResteAllu==0){
        win=0;
    }
    return (NbAllumettesPrises);
}
int joueur (int NbAllumettesPrises,int ResteAllu,int win){
    do{
        printf("Veuillez entrer le nombre d'allumettes que vous souhaitez saisir 1 et 3 \n");
        scanf ("%d",&NbAllumettesPrises);
        printf("Vous avez retire %d allumettes\n",NbAllumettesPrises);
    }
    while((NbAllumettesPrises < 1) || (NbAllumettesPrises > 3));
    if (ResteAllu==0){
            win=1;
    }
    return (NbAllumettesPrises);
}

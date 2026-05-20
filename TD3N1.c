/*Ecrire un algorithme qui saisit un tableau d'entiers de taille N (constante) et qui l'affiche de telle
sorte que tous les entiers pairs se retrouvent avant les entiers impairs.
Par exemple, le programme affichera pour un tableau contenant 7 4 7 8 4 6 3 9 6 ses valeurs de la
manière suivante : 4 8 4 6 6 7 7 3 9.*/
/* Algorihtme
Variables
T[20] entier;
N entier;
i entier;
t entier; *variable temporaire*
Début
AFFICHER "Entrez la taille de votre tableau."
LIRE N
AFFICHER "Entrez les" N "valeurs de votre tableau:"
POUR (i=0,i<N,i++)
    LIRE T[i]
FIN POUR
POUR (i=0,i<N,i++)
    SI (T[i] % 2 != 0)
        t=T[i]
        POUR(j=i,j<N,j++)
            T[j]=T[j+1]
        FIN POUR
        T[N-1]=t
    SINON
        SORTIR
    FIN SI
FIN POUR
AFFICHER "votre tableau"
POUR (i=0,i<N,i++)
    AFFICHER T[i] 
FIN POUR
Fin*/
#include<stdio.h>

void tableauEntre(int *T[20], int *N);//taille tableau N//
void tritab();
void tableauSortie(int tab);

void tableauEntre(int *T[20],int *N)
{
    int i;
    printf("entrez la taille de votre tableau");
    scanf("%d",N);
    printf("entrez les %d valeurs de votre tableau", N);
    for (i=0;i<N;i++)
    {
        scanf("%d", T[i]);
    }
}

void triTab(T[20])
{
    int i;
    int tempo[N];
    for (i=0,i<N,i++)
    {
        if (T[i] % 2 != 0)
        {
            t=T[i];
            for (j=i;j<N;j++)
            {
                T[j]=T[j+1];
            }
            T[N-1]=t;
        }   
        if else
        {
            break;
        }
    }
}

void tableauSortie(int tab)
{
    int i;
    printf("Votre tableau:");
    for (i=0;i<N;i++)
    {
        printf("%d", tab );
    }
}

int main()
{
    int T[20], N;
    void tableauEntre(&T , &N);
    void triTab(T);
    void tableauSortie(T);
    return (0);
}

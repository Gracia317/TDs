/*Ecrire un algorithme qui saisit un tableau d'entiers de taille N (constante) et qui l'affiche de telle
sorte que tous les entiers pairs se retrouvent avant les entiers impairs.
Par exemple, le programme affichera pour un tableau contenant 7 4 7 8 4 6 3 9 6 ses valeurs de la
manière suivante : 4 8 4 6 6 7 7 3 9.*/

#include<stdio.h>

void tableauEntre(int T[], int *N);//taille tableau N//
void tritab(int T[], int N);
void tableauSortie(int T[], int N);

void tableauEntre(int T[],int *N)
{
    int i;
    printf("entrez la taille de votre tableau: ");
    scanf("%d",N);
    while (*N <= 0 || *N > 20)
    {
        printf("Taille invalide, entrez une valeur entre 1 et 20 : ");
        scanf("%d", N);
    }
    printf("entrez les %d valeurs de votre tableau: \n", *N);
    for (i=0;i<*N;i++)
    {
        scanf("%d", T+i);
    }
}

void tritab(int T[], int N)
{
    int pairs[20];   
    int impairs[20];
    
    int nbPairs = 0;  
    int nbImpairs=0;
    
    int i;
    
    for (i = 0; i < N; i++)
    {
        if (T[i] % 2 == 0)
        {
            pairs[nbPairs] = T[i];
            nbPairs++;
        }
        else
        {
            impairs[nbImpairs] = T[i];
            nbImpairs++;
        }
    }

    for (i = 0; i < nbPairs; i++)
    {
        T[i] = pairs[i];
    }

    for (i = 0; i < nbImpairs; i++)
    {
        T[nbPairs + i] = impairs[i];
    }
}

void tableauSortie(int T[], int N)
{
    int i;
    printf("Votre tableau avec les pairs en premier:");
    for (i=0;i<N;i++)
    {
        printf("%d ", T[i] );
    }
    printf ("\n");
}

int main()
{
    int T[20], N;
    tableauEntre(T,&N);
    tritab(T, N);
    tableauSortie(T, N);
    return (0);
}


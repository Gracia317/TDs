/*Ecrire un algorithme qui saisit un tableau d'entiers de taille N (constante) et qui l'affiche de telle
sorte que tous les entiers pairs se retrouvent avant les entiers impairs.
Par exemple, le programme affichera pour un tableau contenant 7 4 7 8 4 6 3 9 6 ses valeurs de la
manière suivante : 4 8 4 6 6 7 7 3 9.*/

#include<stdio.h>

void tableauEntre(int *T, int *N);//taille tableau N//
void tritab(int T[], int N);
void tableauSortie(int T[], int N);

void tableauEntre(int *T,int *N)
{
    int i;
    printf("entrez la taille de votre tableau");
    scanf("%d",N);
    while (*N <= 0 || *N > 20)
    {
        printf("Taille invalide, entrez une valeur entre 1 et 20 : ");
        scanf("%d", N);
    }
    printf("entrez les %d valeurs de votre tableau", *N);
    for (i=0;i<*N;i++)
    {
        scanf("%d", (T+i));
    }
}

void tritab(int T[], int N)
{
    int i, j;
    int temp[20];
    for (i=0;i<N;i++)
    {
        if (T[i] % 2 != 0)
        {
            temp[j]=T[i];
            j++;
        }   
    }
    for (i = 0; i < N; i++)
    {
        T[i] = temp[i];
    }
}

void tableauSortie(int T[], int N)
{
    int i;
    printf("Votre tableau:");
    for (i=0;i<N;i++)
    {
        printf("%d", T[i] );
    }
}

int main()
{
    int T[20], N;
    tableauEntre(T,&N);
    tritab(T, N);
    tableauSortie(T, N);
    return (0);
}

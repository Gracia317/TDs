/*Ecrire un algorithme qui saisit un tableau d'entiers de taille N (constante) et qui l'affiche de telle
sorte que tous les entiers pairs se retrouvent avant les entiers impairs.
Par exemple, le programme affichera pour un tableau contenant 7 4 7 8 4 6 3 9 6 ses valeurs de la
manière suivante : 4 8 4 6 6 7 7 3 9.*/
/*
Fonctions utilisées
recup(chaîne Tab, N)
tri
affiche

Variables
t[50] entier
i entier
j entier
tab[50]

Début
AFFICHER "Entrez la valeur de N"
LIRE N
TANT QUE (N>50)
  AFFICHER "N doit être  inférieur ou égal à 50"
  LIRE N
FIN TANT QUE
j=0
POUR (i=0 , i<N , i=i+1)
    LIRE t[i]
    SI (t[i] % 2 == 0) ALORS
      tab[j]=t[i]
      j=j+1
    FIN SI
FIN POUR
POUR (i=0 , i<N , i=i+1)
  POUR (j=0 , j<N , j=j+1)
    SI (tab[i] == '0'&& t[j] != '0') ALORS
      tab[i]=t[j]
    FIN SI
  FIN POUR
  AFFICHER tab[i]
FIN POUR*/
    
#include<stdio.h>

int main()
{
int N; int i; int j;
int t[50];
int tab[50];

printf ("Entrez la taille de votre tableau: ");
scanf ("%d",&N);
while (N>50 || N<=0)
{
  printf("N doit être  inférieur ou égal à 50");
  scanf("%d",&N);
}
j=0;
printf("Entrez les %d valeurs dans votre tableau:\n", N);
for (i=0 ; i<N ; i++)
{
  scanf("%d",&t[i]);
  if ( t[i]%2 == 0)
  {
    tab[j]=t[i];
    j++;
  }
}
for (i=0 ; i<N ; i++)
{
  if (tab[i]%2 != 0)
  {
    tab[j]=t[i];
    j++;
  }
}
printf("Pbl réorganisé: ");
for (i=0; i<N;i++)
{
  printf("%d ", tab[i]);
}
return 0;
}

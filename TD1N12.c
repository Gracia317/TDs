/*Ecrire un algorithme qui calcule et affiche la somme 1+2+3+…+N ou N est saisie au clavier.*/
#include<stdio.h>
int main ()
{
  int N, i, somme;
  printf("Entrez la valeur de N:\n");
  scanf("%d",&N);
  somme=0;
  for (i=1;i<N;i++)
  {
    somme=somme+i;
  }
  printf("1+2+3+..+%d=%d", N,somme);
  return 0;
}
int somme(int N);
void affiche (int s);

int somme(int N)
{
  int i;int somme;
  printf("Entrez un entier N: ");
  scanf("%d",&N);
  somme=0;
  for (i=1; i<N;i++)
  {
    somme=somme+i;
  }
  return(somme);
}

void affiche(int s)
{
  printf("La somme est: %d\n",s);
}


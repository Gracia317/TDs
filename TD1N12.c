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

/*Ecrire un algorithme qui calcule et affiche S=1! + 2! + 3! +…. +N!, où N est saisie au clavier.*/
#include<stdio.h>
int factorielle(int nombre)
{
  int factorielle=1;
  int i;
  for(i=1;i<=nombre;i++)
  {
    factorielle=factorielle*i;
  }
  return (factorielle);
}
int main()
{
  int N,i,somme;
  printf("Entrez la valeur de N:\n");
  scanf("%d",&N);
  somme=0;
  for(i=1;i<=N;i++)
  {
    somme=somme+factorielle(i);
  }
  printf("La somme S=1!+2!+3!+...+%d=%d\n",N,somme);
  return (0);
}
    

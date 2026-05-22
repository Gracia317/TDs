/*Ecrire un algorithme qui calcule et affiche S=1! + 2! + 3! +…. +N!, où N est saisie au clavier.*/
#include<stdio.h>
/*int factorielle(int nombre)
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
}*/

//somme des factoriels

int fact(int N);
void recup(int *N);
int somme_fact(int N);
void affiche (int f, int N);

int fact(int N)
{
  int i, factorielle=1;
  for(i=1;i<=N;i++)
  {
    factorielle=factorielle*i;
  }
  return (factorielle);
}

void recup(int *N)
{
  printf("Entrez un entier N: ");
  scanf("%d", N);
}

int somme_fact(int N)
{
  int i;
  int SOMME=0;
  for (i=1;i<=N;i++)
  {
    SOMME=fact(i)+SOMME;
  }
  return(SOMME);
}

void affiche(int f, int N)
{
  printf("La somme des factorielles de 1 à %d est %d\n", f, N);
}

int main()
{
  int N, result, final;
  recup(&N);
  final=somme_fact(N);//resultat final
  affiche(N, final);
  return (0);
}
  
  

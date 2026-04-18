/*Ecrire un algorithme qui calcule et affiche S=1/1! + 1/2! + 1/3! +….+1/N!, où N est saisi au clavier.*/
#include<stdio.h>
#include<math.h>
int main ()
{
  int N, fact, S, i;
  printf("Entrez la valeur de N:");
  scanf("%d",&N);
  fact=1;
  S=0;
  for (i=1;i<=N;i++)
  {
    fact=fact*i;
    S=S+pow(fact,-1);
  }
  printf("La somme des inverses des factorielles de 1 à %d est %d\n",N,S);
  return 0;
}

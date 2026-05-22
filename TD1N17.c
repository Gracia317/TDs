/*Ecrire un algorithme qui calcule et affiche S=1/1! + 1/2! + 1/3! +….+1/N!, où N est saisi au clavier
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
}*/

#include<stdio.h>
#include<math.h>

float fact(int N);
void recup(int *N);
float somme_fact(int N);
void affiche(int f, int N);

float fact(int N)
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

float somme_fact(int N)
{
  int i;
  int SOMME=0;
  for (i=1;i<=N;i++)
  {
    SOMME=pow(fact(i),-1)+SOMME;
  }
  return(SOMME);
}

void affiche(int f, int N)
{
  printf("La somme des inverses des factoriels de 1 à %d est %d\n", f, N);
}

int main()
{
  int N, result, final;
  recup(&N);
  final=somme_fact(N);//resultat final
  affiche(N, final);
  return (0);
}
  

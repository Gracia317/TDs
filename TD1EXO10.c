#include<stdio.h>
int main ();
{
  /*Qui affiche les diviseurs de N
  Variables
  N entier
  i entier
  Début
  AFFICHER "Entrez la valeur de N"
  LIRE N
  AFFICHER "Les divisuers de N"
  POUR(i=1,i<=N,i=i+1)
    SI(N%i=0) ALORS
      AFFICHER i
    FIN SI
  FIN POUR
  Fin*/
  int N, i;
  printf("Entrez la valeur de N:\n");
  scanf("%d",&N);
  printf("Les diviseurs de N:\n ");
  for (i=1;i<=N;i++)
  {
    if (N%i=0)
    {
      printf("%d",i);
    }
  }
  return (0);
}

/*Ecrire un algorithme qui calcule et affiche le factoriel de N à saisir au clavier.*/
#include<stdio.h>
int main ()
{
  int N, i, factorielle;
  printf("Entrez la valeur de N:\n");
  scanf("%d",&N);
  factorielle=1;
  for (i=1;i<N;i++)
  {
    factorielle=factorielle*i;
  }
  printf("%d!=%d", N,factorielle);
 return 0;
}

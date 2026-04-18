/*Construire un algorithme qui calcule et affiche la somme s=1 + 10 + 10^2+ ….+ 10^N ou N est
saisi au clavier.*/
#include<stdio.h>
#include<math.h>
int main ()
{
  int N,i,resultat=0;
  printf("Entrez la valeur de N:");
  scanf("%d",&N);
  for(i=0;i<=N;i++)
  {
    resultat=resultat+pow(10,i);
  }
  printf("La somme s= 1 + 10 + 10^2+ ….+ 10^%d=%d",N,resultat);
  return (0);
}

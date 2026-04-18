#include<stdio.h>
#include<math.h>
int main ()
{
  int N, i, somme_inverse;
  printf("Entrez la valeur de N:\n");
  scanf("%d",&N);
  somme_inverse=0;
  for (i=2;i<=N;i++)
  {
    somme_inverse=somme_inverse+pow(i,-1);
  }
  printf("La somme: 1/1+1/2+1/3+....+1/%d=%d \n", N,somme_inverse);
  return (0);
}

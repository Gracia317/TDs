/*Ecrire un programme en langage C qui lit deux tableaux d'entiers A et B et leurs dimensions N et M
au clavier et qui ajoute les éléments de B à la fin de A.*/
#include<stdio.h>
int main()
{
  int A[50], B[10];
  int M, N, i, j, S;
  printf("Entrez la taille de votre tableau A:");
  scanf("%d",&N);
  printf("Entrez les %d valeurs du tableau A",N);
  for(i=0;i<N;i++)
  {
    scanf("%d",&A[i]);
  }
  printf("Le tableau A:");
  for(i=0;i<N;i++)
  {
    printf("%d ",A[i]);
  }
  printf("\nEntrez la taille de votre tableau B:");
  scanf("%d",&M);
  printf("Entrez les %d valeurs du tableau B",M);
   for(i=0;i<M;i++)
  {
    scanf("%d",&B[i]);
  }
  printf("\nLe tableau B:");
  for(i=0;i<M;i++)
  {
    printf("%d ",B[i]);
  }
  for(i=0;i<50;i++)
  {
    if(A[i]!='0');
    {
      for(j=0;j<10;j++)
      {
        A[i]=B[j];
      }
    }
  }
  S=M+N;
  printf("Le tableau A+B:");
  for(i=0;i<S;i++)
  {
    printf("%d ",A[i]);
  }
  return 0;
}

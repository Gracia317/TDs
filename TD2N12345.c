/*Ecrire un programme qui lit la dimension N d'un tableau T du type int (dimension maximale: 50
composantes), remplit le tableau par des valeurs entrées au clavier et affiche le tableau. Calculer et
afficher ensuite la somme des éléments du tableau.*/
#include<stdio.h>
int main()
{
  int T[50],TPOS[50], TNEG[50]; 
  int N, somme, i, j, max;
  printf("Entrez la dimension de votre tableau:");
  scanf("%d",&N);
  printf("Entrez %d valeurs\n",N);
  for(i=0;i<N;i++)
  {
    scanf("%d ",&T[i]);
  }
  printf("Votre tableau:");
  for(i=0;i<N;i++)
  {
    printf("%d ",T[i]);
  }
  somme=0;
  for(i=0;i<N;i++)
  {
    somme=somme+T[i];
  }
  printf("La somme des %d valeurs de votre tableau est:%d\n\n", N,somme);
//Afficher la valeur maximale du tableau T et indiquer sa position//
  max=T[0];
  for(i=0;i<N;i++)
  {
    if(max<T[i])
    {
      max=T[i];
    }
  }
  printf("La valeur maximale est %d\n\n", max);
  for(i=0;i<N;i++)
  {
    if(T[i]==max)
    {
      printf("La valeur maximale est à la position %d\n\n",i);
    }
  }
  j=0;
  for(i=0;i<N;i++)
    {
      if(T[j]!=0)//Effacer ensuite toutes les occurrences de la valeur 0 dans le tableau T et tasser les éléments restants.//
      {
      T[j]=T[i];
      j+=i;
      }
    }
  printf("Le tableau sans occurence 0:\n ");
  for(i=0;i<j;i++)/*Copiez ensuite toutes les composantes strictement positives dans un deuxième tableau TPOS et toutes les valeurs strictement négatives dans un troisième tableau TNEG. Afficher les tableaux TPOS et TNEG.*/
  {
    printf("%d ",T[i]);
  }
  printf("\n\n");
  for(i=0;i<N;i++)
  {
    if(T[i]>0)
    {
      TPOS[i]=T[i];
    }
    else
    {
      TNEG[i]=T[i];
    }
  }
  printf("Le tableau des positifs: ");
  for(i=0;i<N;i++)
  {
    printf("%d ",TPOS[i]);
  }
  printf("\n\n");
  printf("Le tableau des negatifs: ");
  for(i=0;i<N;i++)
  {
    printf("%d ",TNEG[i]);
  }
  return 0;
}

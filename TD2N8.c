/*Ecrire un programme en langage C qui détermine la plus grande et la plus petite valeur dans un
tableau d’entiers A. Afficher ensuite la valeur et la position du maximum et du minimum. Si le
tableau contient plusieurs maxima ou minima, le programme retiendra la position du premier
maximum ou minimum rencontré.*/
#include<stdio.h>
void nombreEntre(int  *A)
{
  int i;
  printf("Entrez 10 valeurs de votre tableau:\n");
  for(i=0;i<10;i++)
  {
    scanf("%d",(A+i));
  }
}
void MinMax(int *A, int taille)
{
  int i;
  int max=A[0];
  int min=A[0];
  int posMax=0 , posMin=0;
  for(i=0;i<taille;i++)
  {
    if(max<A[i])
    {
      max=A[i];
      posMax=i;
    }
    if(min>A[i])
    {
      min=A[i];
      posMin=i;
    }
  }
  printf("La valeur maximale %d est a la position %d\n",max, posMax);
  printf("La valeur minimum %d est a la position %d\n",min, posMin);

}
int main ()
{
  int A[10];

  nombreEntre(A);
  MinMax(A , 10);
  return 0;
}

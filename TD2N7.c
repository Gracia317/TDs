/*Ecrire un programme en langage C qui calcule le produit scalaire de deux vecteurs d’entiers U et V
(de même dimension).*/
#include<stdio.h>

int scalaire(int *u[2] ,*v[2])
{
  int scalaire;
  scalaire=(*u[0])*(*v[0])+(*u[1])*(*v[1]);
  return (scalaire);
}
int main ()
{
  int scalaire;
  printf("Entrez les composants du vecteur u:\n");
  scanf("%d",(u+0));
  scanf("%d",(u+1));
  printf("Entrez les composants du vecteur v:\n");
  scanf("%d",(v+0));
  scanf("%d",(v+1));
  scalaire=scalaire(*(u+0),*(u+1),*(v+0),*(v+1));
  printf("produit scalaire de u et v: %d\n", scalaire);
  return 0;
}

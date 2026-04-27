#include<stdio.h>
/*VARIABLES
  a EST_DU_TYPE NOMBRE
  b EST_DU_TYPE NOMBRE
  x EST_DU_TYPE NOMBRE
  y EST_DU_TYPE NOMBRE
  r EST_DU_TYPE NOMBRE
  ppcm EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER "Entrez la valeur du premier nombre"
  LIRE a
  AFFICHER "Entrez la valeur du deuxieme nombre"
  LIRE b
  SI (a>b) ALORS
    DEBUT_SI
    x PREND_LA_VALEUR a
    y PREND_LA_VALEUR b
    FIN_SI
    SINON
      DEBUT_SINON
      x PREND_LA_VALEUR b
      y PREND_LA_VALEUR a
      FIN_SINON
  r PREND_LA_VALEUR x%y
  TANT_QUE (r!=0) FAIRE
    DEBUT_TANT_QUE
    x PREND_LA_VALEUR y
    y PREND_LA_VALEUR r
    r PREND_LA_VALEUR x%y
    FIN_TANT_QUE
  AFFICHER "Le pgcd est"
  AFFICHER y
  ppcm PREND_LA_VALEUR (a*b)/y
  AFFICHER "Le ppcm est"
  AFFICHER ppcm
FIN_ALGORITHME*/


int main ()
{
  int a,b,x,y,r,ppcm;
  printf("Entrez la valeur du premier nombre");
  scanf("%d",&a);
  printf("Entrez la valeur du deuxieme nombre");
  scanf("%d",&b);
  if(a<b)
  {
    x=a;
    y=b;
  }
  else
  {
    x=b;
    y=a;
  }
  r=x%y;
  while(r != 0)
  {
    x=y;
    y=r;
    r=x%y;
  }
  printf("Le pgcd est %d", r);
  ppcm=(a*b)/y;
  printf("Le ppcm est %d", ppcm);
  
  return (0);
}

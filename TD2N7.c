/*Ecrire un programme en langage C qui calcule le produit scalaire de deux vecteurs d’entiers U et V
(de même dimension).*/
#include<stdio.h>

void recup (int *n);
void u_et_v(int *u, int *v, int n);
int scalaire2(int u[], int v[], int n);

void recup(int *n)
{
  printf("Dimension de votre tableau?: ");
  scanf("%d", n);
}

void u_et_v(int *u, int *v, int n)
{
  int i;
  printf("les composantes de u:\n");
  for (i=0; i<n; i++)
  {
    scanf("%d", (u+i) );
  }
  printf("les composantes de v:\n");
  for (i=0; i<n; i++)
  {
    scanf("%d", (v+i) );
  }
}

int scalaire2(int u[], int v[], int n)
{
  int r=0;
  while ( n != 0 )
    {
      r=r+u[n-1]*v[n-1];
      n--;
    }
  return r;
}

int main()
{
  int n;
  int valiny;
  recup(&n);
  int u[n], v[n];
  u_et_v(u, v, n);
  valiny=scalaire2(u, v, n);
  printf("produit scalaire u et v= %d\n", valiny);
  return 0;
}

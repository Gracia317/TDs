/*Ecrire un programme qui lit la dimension N d'un tableau T du type int (dimension maximale: 50
composantes), remplit le tableau par des valeurs entrées au clavier et affiche le tableau. Calculer et
afficher ensuite la somme des éléments du tableau.*/
#include<stdio.h>

void recupN (int *N);
void recupVal(int N, int *T);
void affichetab(int T[], int N);
int somme(int T[], int N);
void affichesomme(int N, int sm);
void maximum(int T[], int N);
int zero(int T[] , int N);
void posandneg(int T[], int N, int *TPOS, int *TNEG, int *npos,int *nneg);
void afficheposneg(int N, int TPOS[], int TNEG[], int npos, int nneg);

void recupN(int *N)
{
  printf("Entrez la dimension de votre tableau:");
  scanf("%d",N);
}

void recupVal(int N, int *T)
{
  int i;
  printf("Entrez %d valeurs\n",N);
  for(i=0;i<N;i++)
  {
    scanf("%d ",(T+i));
  }
} 

void affichetab(int T[], int N)
{
  int i;
  printf("Votre tableau: ");
  for(i=0;i<N;i++)
  {
    printf("%d ", T[i]);
  }
  printf("\n");
}

int somme(int T[], int N)
{
  int somme=0;
  int i;
  somme=0;
  for(i=0;i<N;i++)
  {
    somme=somme+T[i];
  }
  return somme;
}

void affichesomme(int N, int sm)
{
  printf("La somme des %d valeurs de votre tableau est: %d\n\n", N,sm);
}

//Afficher la valeur maximale du tableau T et indiquer sa position//
void maximum(int T[], int N)
{
  int max=T[0];
  int i, idmax;
  for(i=0;i<N;i++)
  {
    if (max<T[i])
    {
      max=T[i];
      idmax=i;
    }
  }
  printf("La valeur maximale %d est a la position%d\n\n", max, idmax);
}

//Effacer ensuite toutes les occurrences de la valeur 0 dans le tableau T et tasser les éléments restants.
int zero(int T[] , int N)
{
  int i, j;
  for(i=0;i<N;i++)
  {
    if(T[i]==0)
    {
      for(j=i;j<N-1;j++)
      {
        T[j]=T[j+1];
      }
      N--;
      i--;
    }
  }
  return N;
} 

//Copiez ensuite toutes les composantes strictement positives dans un deuxième tableau TPOS et toutes les valeurs strictement négatives dans un troisième tableau TNEG. 
//Afficher les tableaux TPOS et TNEG.
void posandneg(int T[], int N, int *TPOS, int *TNEG, int *npos, int *nneg)
{
  int i;
  *npos=0;
  *nneg=0;
  for (i=0;i<N;i++)
  {
    if (T[i]<0)
    {
      TNEG[*nneg]=T[i];
      (*nneg)++;
    }
    else
    {
      TPOS[*npos]=T[i];
      (*npos)++;
    }
  }
}

void afficheposneg(int N, int TPOS[], int TNEG[], int npos, int nneg)
{
  int i;
  printf("Votre tableau de positifs:");
  for (i=0;i<npos;i++)
  {
    printf("%d  ", TPOS[i]);
  }
  printf("\n\n");
  printf("Votre tableau de négatifs:");
  for (i=0;i<nneg;i++)
  {
    printf("%d  ", TNEG[i]);
  }
  printf("\n");
}

int main()
{
  int N, final;
  recupN(&N);
  int T[N];
  int TPOS[N], TNEG[N];
  int npos, nneg;
  recupVal(N, T);
  affichetab(T,N);
  final=somme(T , N);
  affichesomme(N , final);
  maximum(T, N);
  N=zero(T,N);
  affichetab(T,N);
  posandneg(T,N,TPOS,TNEG, &npos, &nneg);
  afficheposneg(N,TPOS,TNEG, npos, nneg);
  return 0;
}

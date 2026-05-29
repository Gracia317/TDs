//COMMENTAIIIIRE
/*Ecrire un programme en langage C qui lit deux tableaux d'entiers A et B et leurs dimensions N et M
au clavier et qui ajoute les éléments de B à la fin de A.*/
/*#include<stdio.h>
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
}*/
///////////////////////////////////////////

/*Ecrire un programme en langage C qui lit deux tableaux d'entiers A et B et leurs dimensions N et M
au clavier et qui ajoute les éléments de B à la fin de A.*/
#include<stdio.h>

void recupN(int *N, int *M);
void recupval(int *A, int *B, int N, int M);
void afficheAB(int A[], int B[], int M, int N);
void ajout(int N, int M, int A[], int B[]);
void afficheT(int A[]);

void recupN(int *N, int *M)
{
  printf("Entrez la taille de votre tableau A:");
  scanf("%d",N);
  printf("Entrez la taille de votre tableau B:");
  scanf("%d",M);
}

void recupval(int *A, int *B, int N, int M)
{
  int i; 
  printf("Entrez les %d valeurs du tableau A",N);
  printf("\n");
  for(i=0;i<N;i++)
  {
    scanf("%d",(A+i));
  }
  printf("Entrez les %d valeurs du tableau B",M);
  printf("\n");
  for(i=0;i<M;i++)
  {
    scanf("%d",(B+i));
  }
  printf("\n\n");
}

void afficheAB(int A[], int B[], int M, int N)
{
  int i;
  printf("Le tableau A:");
  for(i=0;i<N;i++)
  {
    printf("%d ",A[i]);
  }
  printf("\n");
  printf("Le tableau B:");
  for(i=0;i<M;i++)
  {
    printf("%d ",B[i]);
  }
  printf("\n\n");
}

void ajout(int N, int M, int A[], int B[])
{
  int i, j;
  for(i=0;i<50;i++)
  {
    if(A[i]!='\0');  //misy mbola tsy fetezana
    {
      for(j=0;j<10;j++)
      {
        A[i]=B[j];  //contrôle de la taille du tableau; ohatra 50/100 ny A d  60 ny ao @ B dia lasa tsy antonona ao am tableau A
      }             //amin'ny situation toy itony no ilàna allocation dynamique des tpableaux
    }
  }
}

void afficheT(int A[])
{
  int i;
  printf("elts de B ajoutés à la fin de A");      //misy tsy mety
  for (i=0; i<50; i++)
  {
    printf("%d ", A[i]);
  }
  printf("\n");
}
    

int main()
{
  int A[50], B[10];
  int i, M, N, S;
  
  recupN(&N, &M);
  recupval(A, B, N, M);
  afficheAB(A, B, M, N);
  ajout(N, M, A, B);
  afficheT(A);
  return 0;
}

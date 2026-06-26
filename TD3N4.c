#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void recup(int *T1, int *T2);
void compare(int T1[], int T2[]);
void affiche(int T1[], int T2[]);

void recup(int *T1, int *T2)
{
  srand(time(NULL));
  int i;
  
  printf("Le tableau T1: ");
  for (i=0; i<50; i++)
  {
    *(T1 + i) = rand() %100 ;
    printf("%d ", *(T1+i));
  }
  printf("\n");
  printf("Le tableau T2: ");
  for (i=0; i<20; i++)
  {
    *(T2 + i) = rand() %100 ;
    printf("%d ", *(T2+i));
  }
  printf("\n");
}

void compare(int T1[], int T2[])
{
  int i, j=0;
  int tmp[100];
  for (i=0; i<50; i++)
  {
    if (T1[i] == T2[j])
    {
      tmp[i]=T1[i];
      j++;
    }
  }
}

void affiche(int T1[], int T2[])
{
  int i;
  printf("Le nouveau tableau:");
  for (i=0; i<50; i++)
  {
    printf("%d  ", T1[i]);
  }
  printf("\n");
}

int main()
{
  int T1[50];
  int T2[20];
  recup(T1, T2);
  compare(T1, T2);
  affiche(T1, T2);
  return 0;
}
  
  

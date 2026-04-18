/*Ecrire un algorithme qui lit deux entiers et affiche s’il est premier ou non.*/
#include<stdio.h>
int main ()
{
  int a, b, i;
  printf("Entrez un nombre");
  scanf("%d",&a);
  printf("Entrez un second nombre");
  scanf("%d",&b);
  for(i=2;i<a;i++)
  {
    if (a%i==0)
    {
      printf("%d n'est pas premier.\n",a);
    }
    else
    {
      printf("%d est premier.\n",a);
    }
  }
  for(i=2;i<b;i++)
  {
    if (b%i==0)
    {
      printf("%d n'est pas premier.\n",b);
    }
    else
    {
      printf("%d est premier.\n",b);
    }
  }
  return 0;
}

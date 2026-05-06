/*Ecrire un algorithme qui lit deux entiers et affiche s’il est premier ou non.*/
#include<stdio.h>
int main ()
{
  int a, b, i, compte_diviseur=0;
  printf("Entrez un nombre");
  scanf("%d",&a);
  printf("Entrez un second nombre");
  scanf("%d",&b);
  for(i=1;i<=a;i++)
  {
    if (a%i==0)
    {
      compte_diviseur++;
    }
  }
  if (compte_diviseur==2)
  {
    printf("%d est premier.\n",a);
  }
  else
  {
    printf("%d n'est pas premier.\n",a);
  }
  compte_diviseur=0;
  for(i=1;i<=b;i++)
  {
    if (b%i==0)
    {
      compte_diviseur++;
    }
  }
  if (compte_diviseur==2)
  {
    printf("%d est premier.\n",b);
  }
  else
  {
    printf("%d n'est pas premier.\n",a);
  }
  return (0);
}

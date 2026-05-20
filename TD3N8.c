#include<stdio.h>
int main()
{
  char mot[20];
  int i, bigramme=0, longueur=0;
  printf("Entrez votre mot;\n");
  scanf("%s",mot);
  for(i=0;i<20;i++)
  {
    if(mot[i]!='\0')
    {
      longueur++;
    }
  }
  for(i=0;i<longueur;i++)
  {
    if(i%2!=0)
    {
      bigramme++;
    }
  }
  printf("Occurences de brigrammes: %d .", bigramme);
  return 0;
}

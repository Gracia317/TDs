#include<stdio.h>
int main ()
{
  char text[300];
  int i,longueur=0, a=0, es=0;
  printf("Tapez votre texte et modifier l'espace par _:\n");
  scanf("%s",text);
  for(i=0;i<300;i++)
  {
    while(text[i]!='.')
    {
       longueur++;
    }
  }
  for(i=0;i<longueur;i++)
  {
    printf("%c",text[i]);
    if(text[i]=='a')
    {
      a++;
    }
    printf("Le caractère 'a' apparait %d fois\n", a);
    if(text[i]=='e' && text[i+1]=='s');
    {
      es++;
    }
    printf(" 'es' apparait %d fois\n", es);
  }
  return 0;
}

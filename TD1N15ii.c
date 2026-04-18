/*Construire un algorithme qui calcule et affiche la somme s=1 + 10 + 10^2+ ….+ 10^N ou N est
saisi au clavier.*/
#include<stdio.h>
#include<math.h>
int somme(int N)
{
    int i, s=0;
    printf("Entrez la valeur de N");
    scanf("%f", &N );
    for(i=0;i<N;i++)
    {
        s=s+pow(10, i);
    }
    printf("somme s=1 + 10 + 10^2 + 10^3 + + ... + 10^%d= %d", N, s)
    return (s);
}
int main ()
{
    int N;
    somme(N);
    return (0);
}
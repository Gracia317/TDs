#include<stdio.h>
int main()
{
    int N, i;
    int fact = 1, somme = 0;

    printf("Entrer N : ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        fact = fact * i;
        somme = somme + fact;
    }

    printf("S = %d\n", somme);

    return 0;
}

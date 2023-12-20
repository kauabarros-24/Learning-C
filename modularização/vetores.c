#include <stdio.h>

int main()
{
    int marcador = 1, vetor[10], x;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    scanf("%d", &x);
    for (int n = 0; n < 10; n++)
    {
        if (x == vetor[n])
        {
            marcador = 0;
            printf("SIM");
            break;
        }
    }
    if (marcador == 1)  {
        printf("NAO");
    }
}
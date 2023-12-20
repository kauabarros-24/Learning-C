#include <stdio.h>

int main()
{
    int marcador = 1, vetor[10], x, contador = 0, indices[10], j = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    scanf("%d", &x);
    for (int n = 0; n < 10; n++)
    {
        if (x == vetor[n]) {
            marcador = 0;
            contador++;
            indices[j] = n;
            j++;
        }
    }
    if (marcador == 1)  {
        printf("Mia x");
    }
    else {
        printf("%d\n", contador);
        for (int c = 0; c < contador; c++) {
            printf("%d ", indices[c]);
        }
    }
}
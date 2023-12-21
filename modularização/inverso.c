#include <stdio.h>

int main() {
    int vetor[10], x = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);

    }
    for (int i = 9; i >= 0; i--) {
         printf("%d\n", vetor[i]);
    }
}
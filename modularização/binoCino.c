#include <stdio.h>

int main() {
    int bino, cino, soma;
    scanf("%d %d", &bino, &cino);
    soma = bino + cino;
    if (soma % 2 == 0) {
        printf("Bino");
    }
    else {
        printf("Cino");
    }

}
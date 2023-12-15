#include <stdio.h>

int main () {

    float media;
    scanf("%f", &media);
        if (media >= 7.0) {
            printf("Aprovado\n");
        }
        else if (!(media >= 7.0)) {
            printf("Reprovado");
        }
        else {
            printf("Estranho...");
        }
        return 0;
}
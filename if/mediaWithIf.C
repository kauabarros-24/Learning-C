#include <stdio.h>

int main() {
    float a, b;

    scanf("%f", &a);
    scanf("%f", &b);
    const float media = (a + b) / 2;
    if (media >= 6.0) {
        printf("aprovado");
    }
    else {
        printf("reprovado");
    }
    return 0;
}

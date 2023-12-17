#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int a = 2, b = 3;
    printf("---\n%d\n%d\n---\n\n", a, b);
    printf("soma = %d", soma(1, 2));
}
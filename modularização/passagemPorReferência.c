#include <stdio.h>


int troca(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
    printf("Dentro %d %d\n", *a, *b);
    return 0;


}

int main() {
    int a = 1;
    int b = 2;
    troca(&a, &b);
    printf("%d %d\n", a, b);
    return 0;

}
#include <stdio.h>
#include <string.h>

int main() {
    char nome[20] = "Bolsonaro";
    char n2[20];
    strcpy(n2, nome);
    printf("%s\n", n2);
}
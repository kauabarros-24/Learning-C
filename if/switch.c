#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a == 0) {
        printf("nulo");
    }
    else if (a >= 1) {
        printf("positivo");
    }
    else {
        printf("negativo");
    }
    
}
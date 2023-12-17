#include <stdio.h>

int main() {
    int nDigitado, nLado, nResultado;
    scanf("%d", &nDigitado);
    nLado = 1;
    while (nLado <= 10) {
        nResultado = nLado * nDigitado;
        printf("%d * %d = %d\n", nDigitado, nLado, nResultado);
        nLado++;
    }
    return 0; 
}
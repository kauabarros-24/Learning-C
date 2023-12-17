#include <stdio.h>

int aux() {
    int a = 5;
    printf("%d\n", a);
}

int main() {
    int a = 6;
    printf("%d\n", a);
    aux();
}

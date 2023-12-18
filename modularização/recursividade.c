#include <stdio.h>

int f(int x) {
    if (x == 0) {
        return 1; 
    }
    else {
        return x * f(x - 1);
    }
    
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}
#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d", &a, &b);
    if (b > a) {
        c = a;
        a = b;
        b = c;
    }
    while (b <= a) {
        printf("%d ", b);
        b++;
    }
    return 0;
    
}
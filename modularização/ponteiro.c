#include <stdio.h>

/* int main(){
    int x = 5;
    int *p;
    p = &x;
    printf("%d\n", *p);
    x = 7;
    printf("%d\n", *p);
    *p = 1;
    printf("%d\n", x);
    return 0;
}
*/
int main() {
    printf("int = %d\n", sizeof(int));
    printf("float = %d\n", sizeof(float));
    printf("double = %d\n", sizeof(double));
    printf("char = %d\n", sizeof(char));
    int *p; 
    int x;
    p = &x;
    printf("%x\n", p);
    printf("%x\n", p + 1);
    return 0;
}
#include <stdio.h>

int main() {
    int i = 10;
    float f = 3.14;
    char c = 'a';

    int* ip = &i;
    float* fp = &f;
    char* cp = &c;

    printf("Valor original de i: %d\n", i);
    printf("Valor original de f: %.2f\n", f);
    printf("Valor original de c: %c\n", c);

    *ip = 20;
    *fp = 6.28;
    *cp = 'b';

    printf("Novo valor de i: %d\n", i);
    printf("Novo valor de f: %.2f\n", f);
    printf("Novo valor de c: %c\n", c);

    return 0;
}

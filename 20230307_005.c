#include <stdio.h>

int ordenar(int* a, int* b, int* c) {
    int igual = (*a == *b) && (*b == *c);

    if (*a > *b) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }

    if (*b > *c) {
        int tmp = *b;
        *b = *c;
        *c = tmp;

        if (*a > *b) {
            tmp = *a;
            *a = *b;
            *b = tmp;
        }
    }

    return igual ? 1 : 0;
}

int main() {
    int a, b, c;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    int igual = ordenar(&a, &b, &c);

    printf("Valores ordenados: %d %d %d\n", a, b, c);

    if (igual) {
        printf("Os tres valores sao iguais.\n");
    } else {
        printf("Existem valores diferentes.\n");
    }

    return 0;
}

#include <stdio.h>

int somar_arrays(int* a, int* b, int* c, int tam) {
    if (a == NULL || b == NULL || c == NULL) {
        return 0;
    }

    for (int i = 0; i < tam; i++) {
        *(c + i) = *(a + i) + *(b + i);
    }

    return 1;
}

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    int c[4];

    if (somar_arrays(a, b, c, 4)) {
        printf("Resultado da soma: ");

        for (int i = 0; i < 4; i++) {
            printf("%d ", c[i]);
        }

        printf("\n");
    } else {
        printf("Os arrays tem tamanhos diferentes.\n");
    }

    return 0;
}

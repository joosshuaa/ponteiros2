#include <stdio.h>

#define ARRAY_SIZE 8

int main() {
    int arr[ARRAY_SIZE];

    printf("Digite %d inteiros:\n", ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", arr + i);
    }

    printf("Dobro dos valores:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        int* p = arr + i;
        printf("%d ", *p * 2);

        if ((*p * 2) % 2 == 0) {
            printf("(par, endereco: %p)", (void*)p);
        }

        printf("\n");
    }

    return 0;
}

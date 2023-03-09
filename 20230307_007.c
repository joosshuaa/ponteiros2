#include <stdio.h>

void min_max(int* v, int n, int* min, int* max) {
    int i;
    *min = v[0];
    *max = v[0];
    for (i = 1; i < n; i++) {
        if (v[i] < *min) {
            *min = v[i];
        }
        if (v[i] > *max) {
            *max = v[i];
        }
    }
}

int main() {
    int v[] = { 4, 1, 9, -3, 6 };
    int n = sizeof(v) / sizeof(v[0]);
    int min, max;
    min_max(v, n, &min, &max);
    printf("O menor elemento do vetor e %d e o maior e %d\n", min, max);
    return 0;
}

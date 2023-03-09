#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* encontra_letra(char* str, char letra, int* tamanho_vetor) {
    int tamanho_str = strlen(str);
    int* vetor = (int*) malloc(tamanho_str * sizeof(int));
    int i, cont = 0;
    for (i = 0; i < tamanho_str; i++) {
        if (str[i] == letra) {
            vetor[cont] = i;
            cont++;
        }
    }
    *tamanho_vetor = cont;
    return vetor;
}
int main() {
    char str[] = "programacao";
    char letra = 'a';
    int tamanho_vetor, i;
    int* vetor_posicoes = encontra_letra(str, letra, &tamanho_vetor);
    printf("Letra encontrada nas posicoes: ");
    for (i = 0; i < tamanho_vetor; i++) {
        printf("%d ", vetor_posicoes[i]);
    }
    printf("\nTotal de letras encontradas: %d\n", tamanho_vetor);
    free(vetor_posicoes);
    return 0;
}

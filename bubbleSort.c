#include "bubbleSort.h"

void bubbleSort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        for ( j =0; j < n - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

void printNumbers (int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%i ", vetor[i]);
    }
    printf("\n");
}

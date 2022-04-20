
#include "bubbleSortPlus.h"

// Bubble sort +
void bubbleSortPlus (int vetor[], int n) {
    int troca = 1;
    int aux;
    for (int k = 1; (k < n - 1) && troca; k++) {
        //troca = 0;
        for (int j = 0; j < n - j - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                troca = 1;
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

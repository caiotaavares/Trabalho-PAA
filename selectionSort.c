
#include "selectionSort.h"

void selectionSort (int vetor[], int vetorLength) {
    int i, j, min, aux;

    for (i = 0; i < (vetorLength - 1); i++) {
        /* O minimo é o primeiro número não ordenado ainda */
        min = i;
        for (j = i+1; j < vetorLength; j++) {
            /* Caso tenha algum numero menor ele faz a troca do minimo*/
            if (vetor[j] < vetor[min]) {
                min = j;
            }
        }
        /* Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los*/
        if (i != min) {
            aux = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = aux;
        }
    }
}

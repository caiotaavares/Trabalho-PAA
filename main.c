#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#include "bubbleSort.h"
#include "bubbleSortPlus.h"
#include "quickSort.h"
#include "quickSortCenter.h"
#include "insectionSort.h"
#include "shellSort.h"
#include "selectionSort.h"
#include "heapSort.h"
#include "mergeSort.h"

void timeCounter (vetor, vetorLength);
void vetorRand (int vetor[], int vetorLength);
void vetorEnum (int vetor[], int vetorLength);
void vetorNotEnum (int vetor[], int vetorLength);
double med (double time, int repeat);

int main() {

    FILE *file;
    file = fopen("result.txt", "a");

    //Tela de apresentação
    printf("\n");
    printf("--------------------------------------");
    printf("\n \n");
    printf("         TRABALHO DE PAA");
    printf("\n(PROJETO E ANALISE DE ALGORITMOS)");
    printf("\n \n");
    printf("-Caio Gabriel Santana Tavares");
    printf("\n \n");
    printf("--------------------------------------");

    printf("\n1 para randomico, 2 para ordenado e 3 para em ordem decrescente\n");
    int userChoise;
    scanf("%d", &userChoise);

    switch (userChoise) {
        case 1: {
    //--------- NÚMEROS ALEATÓRIOS ---------
    srand(time(NULL));
    printf("\n");
    printf("\n");
    //vetor (n) = 1000
    printf("\nCALCULING TO VECTOR (n) == 1000...");
    printf("\n");
    int vetorLength = 1000;
    int vetor[vetorLength];
    vetorRand (vetor, vetorLength);
    timeCounter (vetor, vetorLength);
    printf("\n");
    //printf("\n");

    //vetor (n) = 10.000
    printf("\nCALCULING TO VECTOR (n) == 10.000...");
    printf("\n");
    int vetorLengthn1 = 10000;
    int vetorn1[vetorLengthn1];
    vetorRand (vetorn1, vetorLengthn1);
    timeCounter (vetorn1, vetorLengthn1);
    printf("\n");
    printf("\n");

    //vetor (n) = 20.000
    printf("\nCALCULING TO VECTOR (n) == 20.000...");
    printf("\n");
    int vetorLengthn2 = 20000;
    int vetorn2[vetorLengthn2];
    vetorRand (vetorn2, vetorLengthn2);
    timeCounter (vetorn2, vetorLengthn2);
    printf("\n");
    printf("\n");

    //vetor (n) = 40.000
    printf("\nCALCULING TO VECTOR (n) == 40.000...");
    printf("\n");
    int vetorLengthn3 = 40000;
    int vetorn3[vetorLengthn3];
    vetorRand (vetorn3, vetorLengthn3);
    timeCounter (vetorn3, vetorLengthn3);
    printf("\n");
    printf("\n");
    //vetor (n) = 80.000
    printf("\nCALCULING TO VECTOR (n) == 80.000...");
    printf("\n");
    int vetorLengthn4 = 80000;
    int vetorn4[vetorLengthn4];
    vetorRand (vetorn4, vetorLengthn4);
    timeCounter (vetorn4, vetorLengthn4);
    printf("\n");
    printf("\n");

    //vetor (n) = 160.000
    printf("\nCALCULING TO VECTOR (n) == 160.000...");
    printf("\n");
    int vetorLengthn5 = 160000;
    int vetorn5[vetorLengthn5];
    vetorRand (vetorn5, vetorLengthn5);
    timeCounter (vetorn5, vetorLengthn5);
    printf("\n");
    printf("\n");

    break;
        }

        case 2: {
    //--------- NÚMEROS ORDENADOS ---------
    printf("\n");
    printf("\n");
    //vetor (n) = 1000
    printf("\nCALCULING TO VECTOR (n) == 1000...");
    printf("\n");
    int vetorLength = 1000;
    int vetor[vetorLength];
    vetorEnum (vetor, vetorLength);
    timeCounter (vetor, vetorLength);
    printf("\n");
    //printf("\n");

    //vetor (n) = 10.000
    printf("\nCALCULING TO VECTOR (n) == 10.000...");
    printf("\n");
    int vetorLengthn1 = 10000;
    int vetorn1[vetorLengthn1];
    vetorEnum (vetorn1, vetorLengthn1);
    timeCounter (vetorn1, vetorLengthn1);
    printf("\n");
    printf("\n");

    //vetor (n) = 20.000
    printf("\nCALCULING TO VECTOR (n) == 20.000...");
    printf("\n");
    int vetorLengthn2 = 20000;
    int vetorn2[vetorLengthn2];
    vetorEnum (vetorn2, vetorLengthn2);
    timeCounter (vetorn2, vetorLengthn2);
    printf("\n");
    printf("\n");

    //vetor (n) = 40.000
    printf("\nCALCULING TO VECTOR (n) == 40.000...");
    printf("\n");
    int vetorLengthn3 = 40000;
    int vetorn3[vetorLengthn3];
    vetorEnum (vetorn3, vetorLengthn3);
    timeCounter (vetorn3, vetorLengthn3);
    printf("\n");
    printf("\n");
    //vetor (n) = 80.000
    printf("\nCALCULING TO VECTOR (n) == 80.000...");
    printf("\n");
    int vetorLengthn4 = 80000;
    int vetorn4[vetorLengthn4];
    vetorEnum (vetorn4, vetorLengthn4);
    timeCounter (vetorn4, vetorLengthn4);
    printf("\n");
    printf("\n");

    //vetor (n) = 160.000
    printf("\nCALCULING TO VECTOR (n) == 160.000...");
    printf("\n");
    int vetorLengthn5 = 160000;
    int vetorn5[vetorLengthn5];
    vetorEnum (vetorn5, vetorLengthn5);
    timeCounter (vetorn5, vetorLengthn5);
    printf("\n");
    printf("\n");

    break;
        }

        case 3: {
    //--------- NÚMEROS EM ORDEM DECRESCENTE ---------
    printf("\n");
    printf("\n");
    //vetor (n) = 1000
    printf("\nCALCULING TO VECTOR (n) == 1000...");
    printf("\n");
    int vetorLength = 1000;
    int vetor[vetorLength];
    vetorNotEnum (vetor, vetorLength);
    timeCounter (vetor, vetorLength);
    printf("\n");
    //printf("\n");

    //vetor (n) = 10.000
    printf("\nCALCULING TO VECTOR (n) == 10.000...");
    printf("\n");
    int vetorLengthn1 = 10000;
    int vetorn1[vetorLengthn1];
    vetorNotEnum (vetorn1, vetorLengthn1);
    timeCounter (vetorn1, vetorLengthn1);
    printf("\n");
    printf("\n");

    //vetor (n) = 20.000
    printf("\nCALCULING TO VECTOR (n) == 20.000...");
    printf("\n");
    int vetorLengthn2 = 20000;
    int vetorn2[vetorLengthn2];
    vetorNotEnum (vetorn2, vetorLengthn2);
    timeCounter (vetorn2, vetorLengthn2);
    printf("\n");
    printf("\n");

    //vetor (n) = 40.000
    printf("\nCALCULING TO VECTOR (n) == 40.000...");
    printf("\n");
    int vetorLengthn3 = 40000;
    int vetorn3[vetorLengthn3];
    vetorNotEnum (vetorn3, vetorLengthn3);
    timeCounter (vetorn3, vetorLengthn3);
    printf("\n");
    printf("\n");
    //vetor (n) = 80.000
    printf("\nCALCULING TO VECTOR (n) == 80.000...");
    printf("\n");
    int vetorLengthn4 = 80000;
    int vetorn4[vetorLengthn4];
    vetorNotEnum (vetorn4, vetorLengthn4);
    timeCounter (vetorn4, vetorLengthn4);
    printf("\n");
    printf("\n");

    //vetor (n) = 160.000
    printf("\nCALCULING TO VECTOR (n) == 160.000...");
    printf("\n");
    int vetorLengthn5 = 160000;
    int vetorn5[vetorLengthn5];
    vetorNotEnum (vetorn5, vetorLengthn5);
    timeCounter (vetorn5, vetorLengthn5);
    printf("\n");
    printf("\n");

    break;
        }
    }

    printf("\n\n");

    printf("\nEnter/return para sair...\n");
    getchar();
    return 0;
}

void vetorRand (int vetor[], int vetorLength) {
    for (int i = 0; i < vetorLength; i++) {
        vetor[i] = rand() % vetorLength;
        //printf("%d ", vetor[i]);
    }
}

void vetorEnum (int vetor[], int vetorLength) {
    for (int i = 0; i < vetorLength; i++) {
        vetor[i] = i;
    }
}

void vetorNotEnum (int vetor[], int vetorLength) {
    int num = vetorLength;
    for (int i = 0; i < vetorLength; i++) {
        vetor[i] = num;
        num--;
    }
}

void timeCounter (vetor, vetorLength) {

    FILE *file;
    file = fopen("result.txt", "a");

    clock_t t;
    int i;

    double bubbleSortTimeTakenRes;
    double bubbleSortPlusTimeTakenRes;
    double quickSortTimeTakenRes;
    double quickSortCenterTimeTakenRes;
    double insertionSortTimeTakenRes;
    double shellSortTimeTakenRes;
    double selectionSortTimeTakenRes;
    double heapSortTimeTakenRes;
    double mergeSortTimeTakenRes;

    //Bubble Sort
    int repeat;
    repeat = 10;
    printf("\nBubble Sort:\n");
    fprintf(file, "\nBubble Sort:\n");
    for (i = 0; i < repeat; i++) {
        t = clock();
        bubbleSort (vetor, vetorLength);
        t = clock() - t;
        double bubbleSortTimeTaken = ((double)t)/CLOCKS_PER_SEC;
        bubbleSortTimeTakenRes = med(bubbleSortTimeTaken, repeat);
        fprintf(file, "\n%f", bubbleSortTimeTaken);
        printf("\n%f", bubbleSortTimeTaken);
    }

    //Bubble Sort +
    printf("\nBubble Sort Plus\n");
    fprintf(file, "\nBubble Sort Plus\n");
    for (i = 0; i < repeat; i++) {
        t = clock();
        bubbleSortPlus (vetor, vetorLength);
        t = clock() - t;
        double bubbleSortPlusTimeTaken = ((double)t)/CLOCKS_PER_SEC;
        bubbleSortPlusTimeTakenRes = med (bubbleSortPlusTimeTaken, repeat);
        fprintf(file, "\n%f", bubbleSortPlusTimeTaken);
        printf("\n%f", bubbleSortPlusTimeTaken);
    }

    //Quick Sort
    printf("\nQuick Sort\n");
    fprintf(file, "\nQuick Sort\n");
    for (i = 0; i < repeat;
     i++) {
        t = clock();
        quickSort (vetor, 0, vetorLength - 1, vetorLength);
        t = clock() - t;
        double quickSortTimeTaken = ((double)t)/CLOCKS_PER_SEC;
        quickSortTimeTakenRes = med(quickSortTimeTaken, repeat);
        fprintf(file, "\n%f", quickSortTimeTaken);
        printf("\n%f", quickSortTimeTaken);
    }

    //Quick Sort Center
    printf("\nQuick Sort Center\n");
    fprintf(file, "\nQuick Sort Center\n");
    for (i = 0; i < repeat; i++) {
        t = clock();
        quickSortCenter(vetor, 0, vetorLength - 1, vetorLength);
        t = clock() - t;
        double quickSortCenterTimeTaken = ((double)t)/CLOCKS_PER_SEC;
        quickSortCenterTimeTakenRes = med (quickSortCenterTimeTaken, repeat);
        fprintf(file, "\n%f", quickSortCenterTimeTaken);
        printf("\n%f", quickSortCenterTimeTaken);
    }

    //Insertion Sort
    printf("\nInsertion Sort\n");
    fprintf(file, "\nInsertion Sort\n");
    for (i = 0; i < repeat; i++) {
        t = clock();
        insertionSort (vetor, vetorLength);
        t = clock() - t;
        double insertionSortTimeTaken = ((double)t)/CLOCKS_PER_SEC;
        insertionSortTimeTakenRes = med(insertionSortTimeTaken, repeat);
        fprintf(file, "\n%f", insertionSortTimeTaken);
        printf("\n%f", insertionSortTimeTaken);
    }

    //Shell Sort
    printf("\nShell Sort\n");
    fprintf(file, "\nShell Sort\n");
    for (i = 0; i < repeat; i++) {
        t = clock();
        shellSort (vetor, vetorLength);
        t = clock() - t;
        double shellSortTimeTaken = ((double)t)/CLOCKS_PER_SEC;
        shellSortTimeTakenRes = med(shellSortTimeTaken, repeat);
       fprintf(file, "\n%f", shellSortTimeTaken);
       printf("\n%f", shellSortTimeTaken);
    }

    //Selection Sort
    printf("\nSelection Sort\n");
    fprintf(file, "\nSelection Sort\n");
    for (i = 0; i < repeat; i++) {
        t = clock();
        selectionSort (vetor, vetorLength);
        t = clock() - t;
        double selectionSortTimeTaken = ((double)t)/CLOCKS_PER_SEC;
        selectionSortTimeTakenRes = med(selectionSortTimeTaken, repeat);
        fprintf(file, "\n%f", selectionSortTimeTaken);
        printf("\n%f", selectionSortTimeTaken);
    }

    //Heap Sort
    printf("\nHeap Sort\n");
    fprintf(file, "\nHeap Sort\n");
    for (i = 0; i < repeat; i++) {
        t = clock();
        heapSort (vetor, vetorLength);
        t = clock() - t;
        double heapSortTimeTaken = ((double)t)/CLOCKS_PER_SEC;
        heapSortTimeTakenRes = med(heapSortTimeTaken, repeat);
        fprintf(file, "\n%f", heapSortTimeTaken);
        printf("\n%f", heapSortTimeTaken);
    }

    //Merge Sort
    printf("\nMerge Sort\n");
    fprintf(file, "\nMerge Sort\n");
    for (i = 0; i < repeat; i++) {
        t = clock();
        mergeSort (vetor, 0, vetorLength);
        t = clock() - t;
        double mergeSortTimeTaken = ((double)t)/CLOCKS_PER_SEC;
        mergeSortTimeTakenRes = med (mergeSortTimeTaken, repeat);
        fprintf(file, "\n%f", mergeSortTimeTaken);
        printf("\n%f", mergeSortTimeTaken);
    }

    fprintf(file, "\n");
    fprintf(file, "\n");
    fprintf(file, "\n");
    fclose(file);
}

double med (double time, int repeat) {
    double aux = 0;
    aux = aux + time;
    return aux;
}

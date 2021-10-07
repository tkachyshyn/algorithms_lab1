#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <sys/time.h>
#include "insertion.h"
#include "selection.h"
#include "shellsort.h"
#include "mergesort.h"
#include "arrays.h"
extern int mergecomp;

int main(){
    for (int i=6; i<15; i++) {
        int size = 2;
        for (int j = 0; j < i; j++) {
            size *= 2;
        }
//        int size = 10;
        int array[size];

//        printf("Experiment for randomly generated numbers in the array of the size: %d \n", size);
//        randomArray(array, size);
//        checkTime(array, size);

//        printf("Experiment for increasingly numbers in the array of the size: %d \n", size);
//        increasingArray(array, size);
//        checkTime(array, size);
//
//        printf("Experiment for decreasingly generated numbers in the array of the size: %d \n", size);
//        decreasingArray(array, size);
//        checkTime(array, size);
//
        printf("Experiment for small set of generated numbers in the array of the size: %d \n", size);
        lastArray(array, size);
        checkTime(array, size);
    }
}

int checkTime(int array[], int size) {
    int insertionArray[9], selectionArray[9], shellArray[9], shellMerge[9];

    struct timeval begin, end;

    // measure time for insertion
    gettimeofday(&begin, 0);
    int count = insertionSort(array, size);
    gettimeofday(&end, 0);
    long seconds = end.tv_sec - begin.tv_sec;
    long microseconds = end.tv_usec - begin.tv_usec;
    double elapsed = seconds + microseconds*1e-6;
    printf("Time measured for insertion: %.3f seconds.\n", elapsed);
    printf("Comparisons: %d \n", count);

    //measure time for selection
    gettimeofday(&begin, 0);
    count = selectionSort(array, size);
    gettimeofday(&end, 0);
    seconds = end.tv_sec - begin.tv_sec;
    microseconds = end.tv_usec - begin.tv_usec;
    elapsed = seconds + microseconds*1e-6;
    printf("Time measured for selection: %.3f seconds.\n", elapsed);
    printf("Comparisons: %d \n", count);

    //measure time for shell
    gettimeofday(&begin, 0);
    count = shellSort(array, size);
    gettimeofday(&end, 0);
    seconds = end.tv_sec - begin.tv_sec;
    microseconds = end.tv_usec - begin.tv_usec;
    elapsed = seconds + microseconds*1e-6;
    printf("Time measured for shellsort: %.3f seconds.\n", elapsed);
    printf("Comparisons: %d \n", count);

    //measure time for mergesort
    gettimeofday(&begin, 0);
    mergeSort(array, 0, size - 1);
    gettimeofday(&end, 0);
    seconds = end.tv_sec - begin.tv_sec;
    microseconds = end.tv_usec - begin.tv_usec;
    elapsed = seconds + microseconds*1e-6;
    printf("Time measured for mergesort: %.3f seconds.\n", elapsed);
    printf("Comparisons: %d \n", mergecomp);

    return 0;
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

#include "selection.h"

int selectionSort(int array[], int size){
    int arr[size];
    int comp;
    int tempSize = size;
    int *pointer;

    while (tempSize != 0){
        int min = 32769;
        for( int i = 0; i < tempSize; i++){
            if (array[i] < min){
                min = array[i];
                array[i] = 32769;
                comp++;
            }
        }
        arr[size - tempSize] = min;
        tempSize--;
    }
    return comp;
}
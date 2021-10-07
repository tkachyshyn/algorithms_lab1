#include "insertion.h"

int insertionSort(int array[], int size){
    int key, i, comp;
    for (int j = 1; j < size; j++){
        key = array[j];
        i = j - 1;
        comp++;
        while(i >= 0 && key < array[i]){
            array[i + 1] = array[i];
            i--;
            comp++;
            comp++;
        }
        array[i + 1] = key;
    }
    return comp;
}
// Shell Sort in C programming
//#include <shellsort.h>
#include <stdio.h>

// Shell sort
int shellSort(int array[], int n) {
    int comp;
    for (int interval = n / 2; interval > 0; interval /= 2) {
        comp++;
        for (int i = interval; i < n; i += 1) {
            comp++;
            int temp = array[i];
            int j;
            for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
                array[j] = array[j - interval];
                comp++;
            }
            array[j] = temp;
        }
    }
    return comp;
}

// Print an array




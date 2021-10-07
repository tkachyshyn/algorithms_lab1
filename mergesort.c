#include <stdio.h>
#include <stdlib.h>
int mergecomp;

void merge(int arr[], int left, int mid, int right)
{
    int size1 = mid - left + 1;
    int size2 = right - mid;

    int L[size1], R[size2];

    for (int i = 0; i < size1; i++){
        L[i] = arr[left + i];
    }

    for (int j = 0; j < size2; j++){
        R[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < size1 && j < size2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
            mergecomp++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < size2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int left, int right)
{
    if (left < right) {
        mergecomp++;

        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}



#include "arrays.h"
#include <stdio.h>

void randomArray(int array[], int size){
    srand(time(0));
    for (int i = 0; i<size; i++){
        int num = 0;
        for (int j = 0; j < 5; j++){
            num += rand() % 88888;
        }
        array[i] = num / 5;
    }
}

void increasingArray(int array[], int size){
    for(int i = 0; i< size; i++){
        array[i] = i;
    }
}

void decreasingArray(int array[], int size){
    for(int i = 0; i< size; i++){
        array[i] = size - i;
    }
}

void lastArray(int array[], int size){
    srand(time(0));
    for (int i = 0; i<size; i++){
        int num = rand() % 3;
        array[i] = num;
    }
}//
// Created by master on 06.10.21.
//


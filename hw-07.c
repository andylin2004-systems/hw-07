#include <stdio.h>

int printIntArr(int array[]){
    int arrayLength = sizeof array / sizeof array[0];
    int i;
    printf("[ ");
    for (i = 0; i<arrayLength; i++){
        printf("%d ", array[i]);
    }
    printf("]\n");
}

int calcAvg(int array[]){
    int arrayLength = sizeof array / sizeof array[0];
    int total = 0;
    int i;
    for (i = 0; i < arrayLength; i++)
    {
        total += array[i];
    }
    return total / arrayLength;
}
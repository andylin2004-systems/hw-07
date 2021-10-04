#include <stdio.h>

int printIntArr(int array[]){
    int arrayLength = sizeof array / sizeof array[0];
    int i;
    printf("[ ");
    for (i = 0; i<arrayLength; i++){
        printf("%d ", array[i]);
    }
    printf("]\n");
    return 0;
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

int cloneArray(int copyFrom[], int copyTo[]){
    if (sizeof copyFrom / sizeof copyFrom [0] == sizeof copyTo / sizeof copyTo[0]){
        int arrayLength = sizeof copyFrom / sizeof copyFrom[0];
        int i;
        for (i = 0; i < arrayLength; i++){
            copyTo[i] = copyFrom[i];
        }
        return 0;
    }
    else
    {
        return 1;
    }
}
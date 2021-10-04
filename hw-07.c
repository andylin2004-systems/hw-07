#include <stdio.h>

int printIntArr(int array[], int length){
    int i;
    printf("[ ");
    for (i = 0; i<length; i++){
        printf("%d ", array[i]);
    }
    printf("]\n");
    return 0;
}

double calcAvg(int array[], int length){
    int total = 0;
    int i;
    for (i = 0; i < length; i++)
    {
        total += array[i];
    }
    return total * 1.0 / length;
}

int cloneArray(int copyFrom[], int copyTo[], int length){
    int i;
    for (i = 0; i < length; i++){
        copyTo[i] = copyFrom[i];
    }
    return 0;
}

int main(){
    int array[5] = {1, 2, 3, 4, 5};
    printIntArr(array, sizeof(array) / sizeof(int));
    printf("%0.5f\n", calcAvg(array, sizeof(array) / sizeof(int)));
    int anotherArray[5];
    cloneArray(array, anotherArray, sizeof(array) / sizeof(int));
    printIntArr(array, sizeof(array) / sizeof(int));
    printIntArr(anotherArray, sizeof(anotherArray) / sizeof(int));
}
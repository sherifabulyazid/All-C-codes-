#include <stdio.h>
#include <stdlib.h>
#include "arrayFunctions.h"

int main() {
    int arr1[]= {0, 1, 8, 4, 0, 3, 3, 5, 3, 7, 8, 1};
    int sz1=sizeof(arr1)/sizeof(arr1[0]);
    int n = removeDuplicates(arr1,sz1);
    printArray(arr1,n);
    return 0;
}



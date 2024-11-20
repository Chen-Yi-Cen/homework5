#include <stdio.h>
#include <stdlib.h>

int recursiveMaximum(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }
    int maxOfRest = recursiveMaximum(arr, size - 1);
    if (arr[size - 1] > maxOfRest) {
        return  arr[size - 1];
    }
    else {
        return maxOfRest;
    }
}
int main() {
    int arr[] = { 3, 5, 7, 2, 8, -1, 4, 10, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = recursiveMaximum(arr, size);
    printf("陣列中的最大值是: %d\n", max);
    return 0;
}

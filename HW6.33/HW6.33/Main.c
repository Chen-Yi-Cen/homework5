#include <stdio.h>

int binary_search(int array[], int start, int end, int key) {
    if (start > end) return -1;
    int mid = (start + end) / 2;
    if (key == array[mid]) return mid;
    if (key < array[mid]) return binary_search(array, start, mid - 1, key);
    if (key > array[mid]) return binary_search(array, mid + 1, end, key);
}
int main() {
    int array[] = { 1, 3, 4, 6, 7, 10, 22, 35 };
    int size = sizeof(array) / sizeof(array[0]);
    int key;
    scanf_s("%d", &key);
    printf("%d\n", binary_search(array, 0, size - 1, key));
    return 0;
}
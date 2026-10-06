// WAP to insert an element at the end of an array.

#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40};  // capacity = 10, current size = 4
    int size = 4;                  // current number of elements
    int newElement = 50;

    // insert at the end
    arr[size] = newElement;
    size++;  // increase size

    // print array
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
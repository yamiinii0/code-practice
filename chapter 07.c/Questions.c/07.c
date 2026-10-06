// In an array of numbers, find how many times does a number'x' occurs.

#include <stdio.h>

int countOccurrences(int arr[], int size, int x) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int x = 2;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = countOccurrences(arr, size, x);

    printf("Number %d occurs %d times\n", x, result);

    return 0;
}
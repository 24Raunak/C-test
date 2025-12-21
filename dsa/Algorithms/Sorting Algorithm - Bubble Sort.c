// Optimized Bubble Sort Algorithm

#include <stdio.h>
#include <stdbool.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[], int n) {
    bool swapped;

    for(int i = 0; i < n - 1; i++) {
        swapped = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        // Optimized - if no two elements were swapped by inner loop, then break
        if(swapped == false) {
            break;
        }
    }
}
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for(int i = 0 ; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
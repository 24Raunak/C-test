#include <stdio.h>
void merge() {
    
}
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}
int main() {
    int arr[] = {21, 43, 823, 28, 23, 329};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; ++i) 
        printf("%d ", arr[i]);

    return 0;
}
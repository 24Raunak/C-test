#include <stdio.h>
int search(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) return i;
    }

    return -1;
}
int main() {
    int arr[] = {4, 5, 7, 8, 19, 28};
    int target = 19;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = search(arr, n, target);

    if(result != -1) printf("Index: %d", result);
    else printf("Element not present");

    return 0;
}
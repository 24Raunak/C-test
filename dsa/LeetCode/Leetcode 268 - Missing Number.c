// Leetcode Problem 268 - Missing Number

#include <stdio.h>
int missingNumber(int arr[], int n) {
    int arr_sum = 0, sum = 0;
    for(int i = 0; i < n; i++) {
        arr_sum += arr[i];
        sum += (i + 1);
    }
    return (sum - arr_sum);
}

// Range Formula:- (n * (n + 1)) / 2 ;
int main() {
    int arr[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Missing Number: %d", missingNumber(arr, n));
}
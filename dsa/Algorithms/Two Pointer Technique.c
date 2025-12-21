// The algorithm assumes the array is already sorted in ascending order.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool twoSum(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while(left < right){
        int sum = arr[left] + arr[right];

        if(sum == target) return true;
        else if(sum < target) left++;
        else right--;
    }

    return false;
}
int main() {
    int arr[] = {-3, -1, 0, 1, 2};
    int target = -2;
    int n = sizeof(arr) / sizeof(arr[0]);

    if(twoSum(arr, n, target)) printf("true");
    else printf("false");

    return 0;
}
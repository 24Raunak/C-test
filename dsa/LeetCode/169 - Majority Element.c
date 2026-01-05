// Leetcode Problem 169 - Majority Element
// Using Frequency Array

#include <stdio.h>
int main() {
    int arr[] = {3, 4, 3, 4, 5, 6, 6, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int freq[1000] = {0};
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int max = freq[0];
    for(int i = 0; i < 1000; i++) {
        if(max < freq[i]) {
            max = i;
        }
    }

    printf("%d ", max);
    return 0;    
}
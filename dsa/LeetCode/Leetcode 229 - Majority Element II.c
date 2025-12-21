// Leetcode Problem 229 - Majority Element II
// Using Frequency Array

#include <stdio.h>
int main() {
    int arr[] = {1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int freq[1000] = {0};
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
    for(int i = 0; i < 1000; i++) {
        if(freq[i] > n / 3) {
            printf("%d ", i);
        }
    }
    return 0;    
}
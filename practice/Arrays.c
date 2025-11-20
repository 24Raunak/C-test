// Arrays - Sum, Max, Min, Even-Index Sum, Odd-Index Sum, Left-Shift, Right-Shift, Reverse, Running Sum, Kadane Algorithm

#include <stdio.h>
int sum(int arr[], int n) {
    if(n == 0) {
        return 0;
    } else {
        return arr[n - 1] + sum(arr, n - 1);
    }
}
int max(int arr[], int n) {
    if(n == 1) {
        return arr[0];
    }
    int maximum = max(arr, n - 1);
    if(arr[n - 1] > maximum) {
        return arr[n - 1];
    } else {
        return maximum;
    }
}
int min(int arr[], int n) {
    if(n == 1) {
        return arr[0];
    }
    int minimum = min(arr, n - 1);
    if(arr[n - 1] < minimum) {
        return arr[n - 1];
    } else {
        return minimum;
    }
}
int sum_even(int arr[], int n) {
    if(n <= 0) {
        return 0;
    }
    int sum = 0;
    if((n - 1) % 2 == 0) {
        sum = arr[n - 1];
    }
    return sum + sum_even(arr, n - 1);
}
int sum_odd(int arr[], int n) {
    if(n <= 0) {
        return 0;
    }
    int sum = 0;
    if((n - 1) % 2 == 1) {
        sum = arr[n - 1];
    }
    return sum + sum_odd(arr, n - 1);
}
void left_shift(int arr[], int n) {
    if(n == 1) {
        return;
    }
    int first = arr[0];
    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
}
void right_shift(int arr[], int n) {
    if(n == 1) {
        return;
    }
    int last = arr[n - 1];
    for(int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}
void reverse(int arr[], int n) {
    if(n <= 1) {
        return;
    }
    int temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;
    reverse(arr + 1, n - 2);
}
void running_sum(int arr[], int n) {
    if(n <= 1) {
        return;
    }
    running_sum(arr, n - 1);
    arr[n - 1] = arr[n - 1] + arr[n - 2];
}
int kadane_algorithm(int arr[], int n) {
    int current_max = arr[0];
    int global_max = arr[0];
    for(int i = 1; i < n; i++) {
        if(current_max + arr[i] > arr[i]) {
            current_max += arr[i];
        } else {
            current_max = arr[i];
        }
        if(current_max > global_max) {
            global_max = current_max;
        }
    }
    return global_max;
}
int main() {
    int arr[5] = {4, 5, 3, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Sum: %d\n", sum(arr, n)); //Sum of all the elements in the Array
    printf("Max: %d\n", max(arr, n)); //Max of all the elements in the Array
    printf("Min: %d\n", min(arr, n)); //Min of all the elements in the Array
    printf("Sum Even: %d\n", sum_even(arr, n)); //Sum of all Even Index elements
    printf("Sum Odd: %d\n", sum_odd(arr, n)); //Sum of all Odd Index elements

    printf("Left Shift: ");
    left_shift(arr, n); //Array shifted to left by 1;
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Right Shift: ");
    right_shift(arr, n); //Array shifted to original position
    right_shift(arr, n); //Array shifted to right by 1;
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    left_shift(arr, n); //Array shifted to original position

    printf("Reverse: ");
    reverse(arr, n); //Reverse the Array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    reverse(arr, n); //Reverted the Array to the original position

    printf("Max Subarray Sum: %d\n", kadane_algorithm(arr, n)); //Kadane's Algorithm

    printf("Running Sum: ");
    running_sum(arr, n); //Running sum of an Array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
// Program to check if a number is even or odd

#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("Number is even");
    } else {
        printf("Number is odd");
    }

    return 0;
}
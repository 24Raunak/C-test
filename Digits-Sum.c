// Program to calculate sum of digits of a number

#include <stdio.h>

void main() {
    int num;
    scanf("%d", &num);

    int digitSum = 0;
    while(num > 0) {
        digitSum += num % 10;
        num /= 10;
    }

    printf("%d", digitSum);
}

// Program to calculate the sum of digits of a number

#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);

    int digitSum = 0;
    while(num > 0) {
        digitSum += num % 10;
        num /= 10;
    }

    printf("%d", digitSum);

    return 0;
}
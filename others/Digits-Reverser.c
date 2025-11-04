// Program to reverse digits of a number

#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);

    int revNum = 0;
    while(num > 0) {
        revNum = (revNum * 10) + num % 10;
        num /= 10;
    }
    printf("%d", revNum);

    return 0;
}
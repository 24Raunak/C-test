// Digits Reverser

#include <stdio.h>
int main() {
    int num, revNum;
    revNum = 0;
    printf("Enter the number whose digits are to be reversed ");
    scanf("%d", &num);

    while(num) {
        revNum = revNum * 10 + num % 10;
        num /= 10;
    }
    printf("%d", revNum);

    return 0;
}

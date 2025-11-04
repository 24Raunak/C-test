// Program to find the remainder of two numbers if a is divided by b and if b is divided by a

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers a and b\n");
    scanf("%d %d", &a, &b);

    if(a % b == 0) {
        printf("The remainder when a is divided by b is 0\n");
    } else {
        printf("The remainder when a is divided by b is %d\n", a%b);
    }

    if(b % a == 0) {
        printf("The remainder when b is divided by a is 0\n");
    } else {
        printf("The remainder when b is divided by a is %d\n", b%a);
    }

    return 0;
}
// Program to perform all possible additive and subtractive operations using three numbers

#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d+%d+%d is %d\n", a, b, c, a+b+c);
    printf("%d+%d-%d is %d\n", a, b, c, a+b-c);
    printf("%d-%d-%d is %d\n", a, b, c, a-b-c);
    printf("-%d-%d-%d is %d\n", a, b, c, -a-b-c);
    printf("%d-%d+%d is %d\n", a, b, c, a-b+c);
    printf("-%d-%d+%d is %d\n", a, b, c, -a-b+c);
    printf("%d-%d+%d is %d\n", a, b, c, a-b+c);

    return 0;
}
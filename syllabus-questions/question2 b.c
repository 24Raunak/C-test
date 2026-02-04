// A C-program to find the sum of individual digits of a positive-integer

#include <stdio.h>
int main() {
    int num, a, b, c, d, e , f, g, ans;
    printf("\nEnter the positive integer(max 7 digits)\n");
    scanf("%d", &num);

    if(num >= 0) {
        a = num % 10;
        num = num / 10;
        b = num % 10;
        num = num / 10;
        c = num % 10;
        num = num / 10;
        d = num % 10;
        num = num / 10;
        e = num % 10;
        num = num / 10;
        f = num % 10;
        num = num / 10;
        g = num % 10;

        ans = a + b + c + d + e + f + g;
        printf("The sum of the digits of the number is %d", ans);
    }
    else {
        printf("Number is not positive !");
    }
    
    return 0;
}
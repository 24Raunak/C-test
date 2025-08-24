#include <stdio.h>
#include <math.h>

int main() {
    int n, d5, d4, d3, d2 ,d1, num;
    printf("Enter the 5-digit number which is to be reversed ");
    scanf("%d", &n);

    d5 = n%10;
    n = n/10;
    d4 = n%10;
    n = n/10;
    d3 = n%10;
    n = n/10;
    d2 = n%10;
    n = n/10;
    d1 = n%10;

    num = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;

    printf("The order of the number in reverse is %d", num);

    return 0;
}

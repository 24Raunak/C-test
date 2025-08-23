#include <stdio.h>

int main() {
    int p,t;
    float r,si;

    printf("Enter your principal amount\n");
    scanf("%d", &p);

    printf("\nEnter your rate of interest\n");
    scanf("%f", &r);

    printf("\nEnter your time period\n");
    scanf("%d", &t);

    si=p*r*t/100;

    printf("\nThe total simple interest for that time period will be %f", si);

    return 0;
}

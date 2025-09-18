// Program to calculate simple interest

#include <stdio.h>

void main() {
    int principal, timePeriod;
    float rate, simpleInterest;

    printf("Enter your principal amount\n");
    scanf("%d", &principal);

    printf("\nEnter your rate of interest\n");
    scanf("%f", &rate);

    printf("\nEnter your time period\n");
    scanf("%d", &timePeriod);

    simpleInterest = (principal * rate * timePeriod) / 100;
    printf("\nThe simple interest is %f", simpleInterest);
}

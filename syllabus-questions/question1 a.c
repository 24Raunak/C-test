// Program to calculate electricity bill based on slab rates

#include <stdio.h>

int main() {
    int units;
    float rate, bill;
    printf("Enter electricity consumption in units ");
    scanf("%d", &units);

    if(units >= 0, units <=100) {
        rate = 4.0;
        bill = units* rate;
        printf("The bill is %.1f", bill);
    } else if(units >=101, units <= 150) {
        rate = 4.6;
        bill = units * rate;
        printf("The bill is %.1f", bill);
    } else if(units >= 151, units <= 200) {
        rate = 5.2;
        bill = units * rate;
        printf("The bill is %.1f", bill);
    } else if(units >= 201, units <= 300) {
        rate = 6.3;
        bill = units * rate;
        printf("The bill is %.1f", bill);
    } else if(units > 300) {
        rate = 8.0;
        bill = units * rate;
        printf("The bill is %.1f", bill);
    }

    return 0;
}
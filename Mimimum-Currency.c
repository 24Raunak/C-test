#include <stdio.h>
#include <math.h>

int main() {
    int amount, nohun, nofifty, noten, nofive, notwo, noone, total;
    printf("Enter any amount and this program will display the minimum amount of notes required in denominations Rs1,2,5,10,50,100 to have it:\n ");
    scanf("%d", &amount);

    nohun = amount / 100;
    amount = amount % 100;
    nofifty = amount / 50;
    amount = amount % 50;
    noten = amount / 10;
    amount = amount % 10;
    nofive = amount / 5;
    nofive = amount % 5;
    notwo = amount / 2;
    notwo = amount % 2;
    noone = amount / 1;
    amount = amount % 1;

    total = nohun + nofifty + noten + nofive + notwo + noone;

    printf("The mininmum amount of notes to have this amount is %d", total);

    return 0;
}

// Program to find the greatest out of five numbers

#include <stdio.h>
int main() {
    int a, b, c, d, e;
    printf("Enter the five variables ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int greatestNum = a;

    if(greatestNum < b) {
        greatestNum = b;
    }
    if(greatestNum < c) {
        greatestNum = c;
    }
    if(greatestNum < d) {
        greatestNum = d;
    }
    if(greatestNum < e) {
        greatestNum = e;
    }

    printf("The greatest number is %d", greatestNum);

    return 0;
}
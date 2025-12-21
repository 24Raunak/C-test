// Inverse of 32145 is 12543. In 32145, “5” is at 1st place, therefore in 12543, “1” is at 5th place; in 32145, “4” is at 2nd place, therefore in 12543, “2” is at 4th place.

#include <stdio.h>
#include <math.h>
int inverse(int num) {
	int place = 1;
    int inverse = 0;

    while(num > 0) {
        int digit = num % 10;
        int tens = (int) pow(10, digit - 1);

        inverse += place * tens;

        num /= 10;
        place++;
    }
	
	return inverse;
}
int main() {
    int num;
    scanf("%d", &num);

	int n = inverse(num);
	printf("%d", n);

    return 0;
}

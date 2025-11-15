// Program to check if a number is an Armstrong number or not

#include <stdio.h>
#include <math.h>

int main() {
	int num;
	scanf("%d", &num);
	int i = num;
    int j = num;
	int totalDigits = 0, total = 0, number = 1;

	do {
		i /= 10;
		totalDigits++;
	} while(i != 0);

	do {
		number = j % 10;
		j /= 10;
		total += pow(number, totalDigits);
	} while(number != 0);
	
	if(total == num) {
		printf("Armstrong Number");
	} else {
		printf("Not an Armstrong Number");
	}

	return 0;
}
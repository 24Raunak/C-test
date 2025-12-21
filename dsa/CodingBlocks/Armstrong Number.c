// Armstrong number is a number that is equal to the sum of its own digits, each raised to the power of the number of digits
// Example - 153 = 1^3 + 5^3 + 3^3

#include <stdio.h>
#include <math.h>
void armstrong(int num) {
	int temp = num;
	int totalDigits = 0;
	int sum = 0;
	while(temp > 0) {
		totalDigits++;
		temp /= 10;
	}

	temp = num;
	while(temp > 0) {
		sum += pow(temp % 10, totalDigits);
		temp /= 10;
	}

	if(sum == num) printf("true");
	else printf("false");
}

int main() {
	int num;
	scanf("%d", &num);

	armstrong(num);
	
	return 0;
}
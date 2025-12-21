// Boston number is a composite number where the sum of its digits equals the sum of the digits of its prime factors

#include <stdio.h>
#include <stdbool.h>
int sumDigits(int num) {
	int digitsSum = 0;
	while(num > 0) {
		digitsSum += num % 10;
		num /= 10;
	}
	return digitsSum;
}
bool isPrime(int num) {
	if(num < 2) return false;
	for(int i = 2; i * i <= num; ++i) {
		if(num % i == 0) return false;
	}
	return true;
}
int sumPrime(int num) {
	int primeSum = 0;

	while(num % 2 == 0) {
		primeSum += 2;
		num /= 2;
	}

	for(int i = 3; i * i <= num; i += 2) {
		while(num % i == 0) {
			primeSum += sumDigits(i);
			num /= i;
		}
	}

	if(num > 1) primeSum += sumDigits(num);

	return primeSum;
}
void boston(int num) {
	int primeSum = sumPrime(num);
	int digitsSum = sumDigits(num);

	if(!isPrime(num) && digitsSum == primeSum) printf("1");
	else printf("0");
}
int main() {
	int num;
	scanf("%d", &num);

	boston(num);

	return 0;
}
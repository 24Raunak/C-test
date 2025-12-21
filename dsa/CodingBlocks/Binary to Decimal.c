// Binary number to Decimal number

#include <stdio.h>
void decimal(int num) {
	int num2 = 0;
	int multiply = 1;
	while (num > 0) {
		num2 += (num % 10) * multiply;
		multiply *= 2;
		num /= 10;
	}
	printf("%d", num2);
}
int main() {
	int num;
	scanf("%d", &num);

	decimal(num);
	return 0;
}
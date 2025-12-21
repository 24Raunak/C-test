#include <stdio.h>
void gcd(int num1, int num2) {
	int min;
	if(num1 > num2) {
		min = num2;
	} else {
		min = num1;
	}
	for(int i = min; i > 0; i--) {
		if(num1 % i == 0 && num2 % i == 0) {
			printf("%d", i);
			break;
		} 
	}
}
int main() {
	int num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);

	gcd(num1, num2);
	return 0;
}
// Program to find LCM of two numbers

#include <stdio.h>

int main() {
	int num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);

	for(int i = 1; i <= num2; i++) {
		if((num1 * i) % num2 == 0) {
			printf("%d", num1 * i);
			break;
		}
	}

	return 0;
}
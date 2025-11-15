// Checks if a number is Boston number or not

#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);

	int digitsSum = 0;
	int i = num;
	while(i != 0) {
		digitsSum += i % 10;
		i /= 10;
	}

	int x = 1;
	int a = num;
	int b = 0;
	for(int i = 2; i <= num; i++) {
		for(int j = 2; j < i; j++) {
			if(i % j == 0) {
				x = 0;				
			}
		}
		if(x == 1) {
			while(a != 0) {
                a % i == 0;
                b++;
                b += 1;
                a /= i;
			}
		}
		x = 1;
	}

	if(digitsSum == b) {
		printf("Boston Number");
	} else {
		printf("Not a Boston Number");
	}

	return 0;
}
// Program to print all prime numbers upto a specific number N

#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	int prime = 0;
	int x = 1;

	for(int i = 2; i <= num; i++) {
		for(int j = 2; j < i; j++) {
			if(i % j == 0) {
				x = 0;				
			}
		}
		if(x == 1) {
			printf("%d ", i);
		}
		x = 1;
	}

	return 0;
}
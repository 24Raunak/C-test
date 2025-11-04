// 1 2 3 4 5
// 1 2 3 4 * 
// 1 2 3 * * *
// 1 2 * * * * *
// 1 * * * * * * *

#include<stdio.h>
int main() {
	int num;
	scanf("%d", &num);

	for(int i = 1; i <= num; i++) {
		for(int j = 1; j <= (num - i + 1); j++) {
			printf("%d ", j);
		}
		for(int k = 2; k <= (2 * i) - 2; k++) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
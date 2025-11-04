// 1
// 2 2
// 3 0 3
// 4 0 0 4
// 5 0 0 0 5

#include<stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	for(int i = 1; i <= num; i++) {
		for(int j = 1; j <= i; j++) {
			if(j == 1 || i == j) {
				printf("%d\t", i);
			} else {
				printf("0\t");
			}
		}
		printf("\n");
	}

	return 0;
}
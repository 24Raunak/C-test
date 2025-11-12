// 1
// 2 2
// 3 0 3
// 4 0 0 4

#include<stdio.h>
void hollow_number_pyramid_zeroes(int num) {
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
}
int main() {
	int num;
	scanf("%d", &num);
	hollow_number_pyramid_zeroes(num);

	return 0;
}
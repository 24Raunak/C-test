// 0
// 1 1
// 2 3 5
// 8 13 21 34

#include<stdio.h>
void fibonacci_triangle_pattern(int num) {
	int a, initial = 1, lastNum = 0;
	printf("0\n");
	for(int i = 2; i <= num; i++) {
		for(int j = 1; j <= i; j++) {
			printf("%d\t", initial);
			a = initial;
			initial += lastNum;
			lastNum = a;
		}
		printf("\n");
	}
}
int main() {
	int num;
	scanf("%d", &num);
	fibonacci_triangle_pattern(num);

	return 0;
}
// 0
// 1 1
// 2 3 5
// 8 13 21 34

#include<stdio.h>
int main() {
	int num, x;
	int initial = 1;
	int lastNum = 0;
	scanf("%d", &num);
	
	printf("0\n");
	for(int i = 2; i <= num; i++) {
		for(int j = 1; j <= i; j++) {
			printf("%d\t", initial);
			x = initial;
			initial += lastNum;
			lastNum = x;
		}
		printf("\n");
	}

	return 0;
}
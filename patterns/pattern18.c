// 1 
// 11
// 111 
// 1001 
// 11111
// 100001

#include<stdio.h>
void binary_pyramid_pattern(int num) {
	for(int i = 1; i <= num; i++) {
		for(int j = 1; j <= i; j++) {
			if(i % 2 == 0) {
				if(j == 1 || j == i) {
					printf("1");
				} else {
					printf("0");
				}
			} else {
				printf("1");
			}
		}
		printf("\n");
	}
}
int main() {
	int num;
	scanf("%d", &num);
	binary_pyramid_pattern(num);

	return 0;
}
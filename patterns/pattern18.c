// 1 
// 11
// 111 
// 1001 
// 11111
// 100001

#include<stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	
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

	return 0;
}
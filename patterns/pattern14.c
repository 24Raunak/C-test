 // 1******
 // 12*****
 // 123****
 // 1234***
 // 12345**
 // 123456*
 // 1234567

#include<stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	for(int i = 1; i <= num; i++) {
		for(int j = 1; j <= num; j++) {
			if(j == i || j <= i) {
				printf("%d", j);
			} else {
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}
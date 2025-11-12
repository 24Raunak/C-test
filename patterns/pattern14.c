 // 1****
 // 12***
 // 123**
 // 1234*
 // 12345

#include<stdio.h>
void number_star_right_angled_triangle(int num) {
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
}
int main() {
	int num;
	number_star_right_angled_triangle(num);

	return 0;
}
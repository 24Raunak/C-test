// *       *
//   *   *
//     *
//   *   * 
// *       *

#include <stdio.h>
void diagonal_cross(int num) {
	for(int i = 1; i <= num; i++) {
		for(int j = 1; j <= num; j++) {
			if(i == j || (i + j) == num + 1) {
				printf("* ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
}
int main() {
	int num;
	scanf("%d", &num);
	diagonal_cross_pattern(num);

	return 0;
}
// *       *
//   *   * *
//     *   *
//   *   * *
// * * * * *

#include <stdio.h>
void diagonal_cross_2(int num) {
	for(int i = 1; i <= num; i++) {
		for(int j = 1; j <= num; j++) {
			if(i == j || (i + j) == num + 1 || j == num || i == num) {
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
	diagonal_cross_2(num);	

	return 0;
}
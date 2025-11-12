// 1 2 3 4 5 
// 2 2 3 4 5 
// 3 3 3 4 5 
// 4 4 4 4 5 
// 5 5 5 5 5

#include<stdio.h>
void incremental_number_square(int num) {
	for(int i = 1; i <= num; i++) {
		for(int j = 1; j <= num; j++) {
			if(j <= i) {
				printf("%d ", i);
			} else {
				printf("%d ", j);
			}
		}
		printf("\n");
	}
}
int main () {
	int num;
	scanf("%d", &num);
	incremental_number_square(num);

	return 0;
}
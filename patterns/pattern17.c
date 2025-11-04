// 1						1
// 1	2				2	1
// 1	2	3		3	2	1
// 1	2	3	4	3	2	1

#include<stdio.h>
int main(){
	int num;
	scanf("%d", &num);

	for(int i = 1; i <= num; i++) {
		for(int j = 1; j <= (2 * num - 1); j++) {
			if(j <= num) {
				if(i >= j) {
					printf("%d\t", j);
				} else {
					printf("\t");
				}
			} else {
				if((num * 2) <= (i + j)) {
					printf("%d\t", (2 * num - j));
				} else {
					printf("\t");
				}
			}
		}
		printf("\n");
	}

	return 0;
}
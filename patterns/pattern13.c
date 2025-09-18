//       1 
//     2 3 2
//   3 4 5 4 3
// 4 5 6 7 6 5 4

#include<stdio.h>
int main() {
    int num;
    scanf("%d", &num);

    int a = 1;
    for(int i = 1; i <= num; i++) {
        int b = (i * 2 - 2);
        for(int j = 1; j <= (2 * num - 1); j++) {
            if (j <= num) {
                if((i + j) >= (num + 1)) {
                    printf("%d\t", a);
                    a ++;
                } else {
                    printf("\t");
                }
            } else {
                if((j - i) <= num - 1) {
                    printf("%d\t", b);
                    b--;
                } else {
                    printf("\t");
                }
                a = i + 1;
            }
        }

        printf("\n");
    }
	return 0;
}

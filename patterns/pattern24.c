//       *
//     * *
//   * * *
// * * * *
//   * * *
//     * *
//       *

#include <stdio.h>

void main() {
    int num;
    scanf("%d", &num);

    for(int i = 1; i <= (2 * num - 1); i++) {
        if(i <= num) {
            for(int j = 1; j <= num; j++) {
                if(i + j >= num + 1) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        } else {
            for(int j = num; j >= 1; j--) {
                if(i + j <= 2 * num) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}

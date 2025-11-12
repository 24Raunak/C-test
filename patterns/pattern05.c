// * * * *
//   * * *
//     * *
//       *

#include <stdio.h>
void inverted_left_half_pyramid(int num) {
    for(int i = 1; i <= num; i ++) {
        for(int j = 1; j <= num; j++) {
            if(i <= j) {
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
    inverted_left_half_pyramid(num);

    return 0;
}
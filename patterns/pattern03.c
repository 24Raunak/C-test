//       *
//     * *
//   * * *
// * * * *

#include <stdio.h>
void left_half_pyramid(int num) {
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= num; j++) {
            if(i + j >= num + 1) {
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
    left_half_pyramid(num);

    return 0;
}
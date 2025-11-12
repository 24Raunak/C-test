// *
// * *
// * * *
// * * * *
// * * *
// * *
// *

#include <stdio.h>
void left_aligned_pyramid(int num) {
    for(int i = 1; i <= (2 * num - 1); i++) {
        if(i <= num) {
            for(int j = 1; j <= i; j++) {
                printf("* ");
            }
        } else {
            for(int j = 2 * num - i; j >= 1; j--) {
                printf("* ");
            }
        }
        printf("\n");
    }
}
int main() {
    int num;
    scanf("%d", &num);
    left_aligned_pyramid(num);

    return 0;
}
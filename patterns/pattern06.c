// * * * *
// *     *
// *     *
// * * * *

#include <stdio.h>
void hollow_square(int num) {
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= num; j++) {
            if(i == 1 || i == num || j == 1 || j == num) {
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
    hollow_square(num);

    return 0;
}
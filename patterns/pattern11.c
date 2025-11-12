// 1
// * *
// 2 2 2
// * * * *

#include <stdio.h>
void mixed_number_star_triangle(int num) {
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= i; j++) {
            if(i % 2 == 0) {
                printf("* ");
            } else {
                printf("%d ", (i / 2) + 1);
            }
        }
        printf("\n");
    }
}
int main() {
    int num;
    scanf("%d", &num);
    mixed_number_star_triangle(num);

    return 0;
}
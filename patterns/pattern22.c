// * * * *
//     * * *
//         * *
//             *

#include <stdio.h>
void descending_star_triangle(int num) {
    for(int i = 1; i <= num; i ++) {
        for(int j = 1; j <= num; j++) {
            if(i <= j) {
                printf("* ");
            } else {
                printf("    ");
            }
        }
        printf("\n");
    }
}
int main() {
    int num;
    scanf("%d", &num);
    descending_star_triangle(num);

    return 0;
}
// 1 2 3 4 * 
// 1 2 3 * 5
// 1 2 * 4 5
// 1 * 3 4 5
// * 2 3 4 5

#include <stdio.h>
void diagonal_star_number_square(int num) {
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= num; j++) {
            if(i + j == num + 1) {
                printf("* ");
            } else {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}
int main() {
    int num;
    scanf("%d", &num);
    diagonal_star_number_square(num);

    return 0;
}
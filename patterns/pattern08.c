// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include <stdio.h>
void right_angled_number_triangle(int num) {
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
int main() {
    int num;
    scanf("%d", &num);
    right_angled_number_triangle(num);

    return 0;
}
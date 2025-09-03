// Multiplication Table

#include <stdio.h>
int main() {
    int i, j, x;
    printf("Enter the number whose multiplication table you want ");
    scanf("%d", &x);

    for(i = x ; i <= x; i++) {
        for(j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", x, j, i * j);
        }
    }

    return 0;
}

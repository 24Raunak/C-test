// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <stdio.h>

void main() {
    int num;
    scanf("%d", &num);

    int x = 1;
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", x);
            x++;
        }
        printf("\n");
    }
}

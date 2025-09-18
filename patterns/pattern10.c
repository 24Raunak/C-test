// 1
// 2 2
// 3 3 3
// 4 4 4 4

#include <stdio.h>

void main() {
    int num;
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

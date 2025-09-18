// *
// * *
// * * *
// * * * *

#include <stdio.h>

void main() {
    int num;
    scanf("%d", &num)

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

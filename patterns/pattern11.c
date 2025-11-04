// 1
// * *
// 2 2 2
// * * * *

#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);

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

    return 0;
}
// * * *
// * * *
// * * *

#include <stdio.h>
void square(int num) {
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= num; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int num;
    scanf("%d", &num);
    square(num);

    return 0;
}
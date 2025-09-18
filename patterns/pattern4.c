// * * * *
// * * *
// * *
// *

#include <stdio.h>

void main() {
    int num;
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++) {
        for(int j = num; j >= i; j--) {
            printf("* ");
        }
        printf("\n");
    }
}

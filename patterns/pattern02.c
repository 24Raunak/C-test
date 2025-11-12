// *
// * *
// * * *
// * * * *

#include <stdio.h>
void right_half_pyramid(int num) {
    for(int i = 0; i < num; i++) {
        for(int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int num;
    scanf("%d", &num);
    right_half_pyramid(num);
    
    return 0;
}
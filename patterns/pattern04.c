// * * * *
// * * *
// * *
// *

#include <stdio.h>
void inverted_right_half_pyramid(int num) {
    for(int i = 1; i <= num; i++) {
        for(int j = num; j >= i; j--) {
            printf("* ");
        }
        printf("\n");
    }
}
int main() {
    int num;
    scanf("%d", &num);
    inverted_right_half_pyramid(num);    

    return 0;
}
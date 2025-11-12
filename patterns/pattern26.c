//     *     
//     *     
// * * * * * 
//     *     
//     *     
 
#include <stdio.h>
void plus_star(int num) {
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= num; j++) {
           if(i == (num / 2) + 1 || j == (num / 2) + 1 ) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
int main() {
    int num;
    scanf("%d", &num);
    plus_star(num);

    return 0;
}
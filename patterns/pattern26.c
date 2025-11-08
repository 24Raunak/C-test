//     *     
//     *     
// * * * * * 
//     *     
//     *     
 
#include <stdio.h>
int main() {
    int num = 5;
    
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

    return 0;
}
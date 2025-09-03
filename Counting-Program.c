// Counting Program

#include <stdio.h>
int main() {
    int i, num;
    printf("Till which number do you want the program to count to?\n");
    scanf("%d", &i);

    for(num = 1; num <= i; num++) {
        printf("%d ", num);
    }

    return 0;
}

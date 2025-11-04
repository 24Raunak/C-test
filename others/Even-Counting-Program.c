// Program to count even numbers till a specific number

#include <stdio.h>
int main() {
    int i = 0, num;
    scanf("%d", &num);
    while(i < num) {
        i += 2;
        printf("%d\n", i);
    }

    return 0;
}
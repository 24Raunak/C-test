// Program to count till a specific number

#include <stdio.h>

void main() {
    int num;
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        printf("%d ", i);
    }
}
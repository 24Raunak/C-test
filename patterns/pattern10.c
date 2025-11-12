// 1
// 2 2
// 3 3 3
// 4 4 4 4

#include <stdio.h>
void right_angled_number_pyramid(int num) {
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}
int main() {
    int num;
    scanf("%d", &num);
    right_angled_number_pyramid(num);

    return 0;
}
#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    char str[] = "abcd";
    int n = sizeof(str) / sizeof(str[0]);

    for(int i = 0; i < n; i+=2) {
        swap(&str[i], &str[i + 1]);
    }

    printf("%s", str);
    return 0;
}
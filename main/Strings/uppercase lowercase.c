#include <stdio.h>
int main() {
    char str[] = "Hello";
    int n = sizeof(str) / sizeof(str[0]);

    for(int i = 0; i < n; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        } else {
            str[i] += 32;
        }
    }

    printf("%s", str);
    return 0;
}
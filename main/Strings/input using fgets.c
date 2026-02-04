#include <stdio.h>
int main() {
    char arr[100];
    char arr2[100];

    scanf("%s\n", arr);
    fgets(arr2, sizeof(arr2), stdin);

    printf("%s\n", arr);
    printf("%s", arr2);
}
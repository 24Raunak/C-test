// Program to check whether points lie on a straight line or not

#include <stdio.h>
int main() {
    int x1, x2, x3, y1, y2, y3;
    printf("Enter the coordinates points and this program will check whether they lie on the same line\n");
    printf("Enter the coordinates(x1, y1) of the first point ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates(x2, y2) of the second point ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the coordinates(x3, y3) of the third point ");
    scanf("%d %d", &x3, &y3);

    int m1=(y2-y1)/(x2-x1);
    int m2=(y3-y2)/(x3-x2);

    if(m1 == m2) {
        printf("The three points are collinear");
    } else {
        printf("The three points are not collinear");
    }

    return 0;
}
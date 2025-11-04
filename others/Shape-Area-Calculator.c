// Program to calculate the areas of 

#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    float length, breadth, side, radius, area;

    printf("Area/Volume Calculator Program\nEnter 1 for Rectangle, 2 for Square, 3 for Circle:-\n");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("\nRectangle Area Calculator\nEnter the length and breadth of the rectangle:-\n");
        scanf("%f %f", &length, &breadth);
        area = length * breadth;
        printf("\nThe area of the rectangle is %.2f units.\n\n", area);
    } else if(choice == 2) {
        printf("\nSquare Area Calculator\nEnter the side of the square:-\n");
        scanf("%f", &side);
        area = pow(side, 2.0);
        printf("\nThe area of the square is %.2f units.\n\n", area);
    } else if(choice == 3) {
        printf("\nCircle Area Calculator\nEnter the radius of the circle:-\n");
        scanf("%f", &radius);
        area = 3.14159 * pow(radius, 2.0);
        printf("\nThe area of the circle is %.2f units.\n\n", area);
    } else {
        printf("\nPlease enter the correct digit!\n\n");
    }

    return 0;
}
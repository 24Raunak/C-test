// Program to calculate distance between two places on Earth using their latitudes and longitudes
// Must copy and paste coordinates directly from Google Maps

#include <stdio.h>
#include <math.h>
int main() {
    float x1, y1, x2, y2;

    printf("Enter the coordinates of the first place\n");
    scanf("%f %f", &x1, &y1);

    printf("\nEnter the coordinates of the second place\n");
    scanf("%f %f", &x2, &y2);

    float cor = sqrt(pow((x1 - x2), 2.0) + pow((y1 - y2), 2.0)) * 111;
    float cor_miles = cor * 0.621;

    printf("\nThe distance between the two places is %.2f kilometres or %.2f miles", cor, cor_miles);

    return 0;
}

/* Program to calculate distance between two places 
on Earth using their latitudes and longitudes */

//Can copy and paste coordinates directly from Google Maps.

#include <stdio.h>
#include <math.h>

int main() {
float lat1, lon1, lat2, lon2, cor, cor_miles;

printf("Please enter the value seperated by a comma and a space or else the program will give wrong values\n\n");
printf("Enter the coordinates of Location 1\n");
scanf("%f, %f", &lat1, &lon1);

printf("\nEnter the coordinates of Location 2\n");
scanf("%f, %f", &lat2, &lon2);

cor = sqrt(pow((lat1 - lat2), 2.0) + pow((lon1 - lon2), 2.0)) * 111;
cor_miles = cor * 0.621;

printf("\nThe distance between the two locations is %f kilometres or %f miles.", cor, cor_miles);

return 0;
}

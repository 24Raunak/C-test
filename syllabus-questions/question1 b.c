#include <stdio.h>
#include <string.h>

int main() {
    char health[10], place[10], gender[10];
    int age;

    printf("\nEnter the age of the person\n");
    scanf("%d", &age);

    printf("\nWhere does the person live?(city/village)\n");
    scanf("%s", &place);

    printf("\nWhat is the gender of the person(male/female)\n");
    scanf("%s", &gender);

    printf("\nHow is the health of the person(poor/excellent)\n");
    scanf("%s", &health);

    // Check conditions
    if(strcmp(health, "excellent") == 0 && (age >= 25 && age <= 35) && strcmp(place, "city") == 0) {
        if(strcmp(gender, "male") == 0) {
            printf("\nPerson is insured\n");
            printf("Premium rate is Rs.4 per thousand\n");
            printf("Maximum policy amount cannot exceed Rs.2,00,000\n");
        }
        else if(strcmp(gender, "female") == 0) {
            printf("\nPerson is insured\n");
            printf("Premium rate is Rs.3 per thousand\n");
            printf("Maximum policy amount cannot exceed Rs.1,00,000\n");
        }
        else {
            printf("Invalid gender");
        }
    } else if(strcmp(health, "poor") == 0 && (age >= 25 && age <= 35) && strcmp(place, "village") == 0) {
        printf("\nPerson is insured\n");
        printf("Premium rate is Rs. 6 per thousand\n");
        printf("Maximum policy amount cannot exceed Rs.10,000\n");
    }
    else {
        printf("Person is not insured\n");
    }

    return 0;
}
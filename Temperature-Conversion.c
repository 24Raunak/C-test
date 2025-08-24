#include <stdio.h>

int main() {
    int choice;
    float fahr, celsius;

    printf("Enter 1 to convert from Fahrenheit to Celsius or 2 to convert from Celsius to Fahrenheit\n");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter the value of temperature in Fahrenheit ");
        scanf("%f", &fahr);
        celsius = (fahr - 32) * 5.0 / 9.0;
        printf("The value of temperature in celsius is %.2f", celsius);
    }
    
    if(choice == 2); {
        printf("Enter the value of temperature in Celsius ");
        scanf("%f", &celsius);
        fahr = (celsius * 9.0 / 5.0) + 32;
        printf("The temperature in Fahrenheit is %.2f", fahr);
    }

    return 0;
}

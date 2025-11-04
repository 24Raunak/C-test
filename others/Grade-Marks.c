// Program to assign grade based on the marks of the student

#include <stdio.h>
int main() {
    int marks;
    printf("Enter the marks of student ");
    scanf("%d", &marks);

    if(marks <= 100, marks >= 91) {
        printf("A");
    } else if(marks <= 90, marks >= 81) {
        printf("B");
    } else if(marks <= 80, marks >= 71) {
        printf("C");
    } else if(marks <= 70, marks >= 61) {
        printf("D");
    } else if(marks <= 60, marks >= 51) {
        printf("E");
    } else {
        printf("F");
    }

    return 0;
}
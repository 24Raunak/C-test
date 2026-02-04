#include <stdio.h>
int main() {
    int score;
    printf("Enter the score of the student(0-100):\n");
    scanf("%d", &score);

    if(score < 0 || score > 100) {
        printf("Invalid Score!\n");
    }

    switch(score / 10) {
        case 10: // for 100
        case 9: // 90 - 99
        printf("Grade: O\n");
        break;
        case 8: // 80 - 89
        printf("Grade: A\n");
        break;
        case 7: // 70 - 79
        printf("Grade: B\n");
        break;
        case 6: // 60 - 69
        printf("Grade: C\n");
        break;
        case 5: // 50 - 59
        printf("Grade: D\n");
        break;
        case 4: // 40 - 49
        printf("Grade: E\n");
        break;
        default: // 0 - 39
        printf("Grade: Fail\n");
        break;
    }

    return 0;
}
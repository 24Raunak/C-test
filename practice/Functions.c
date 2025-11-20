// Pass by value, Pass by reference, Factorial, Fibonacci

#include <stdio.h>
void passbyvalue(int num) {
    num = 5;
}
void passbyreference(int *num) {
    *num = 5;
}
int fibonacci(int num) {
    if(num == 0) return 0;
    if(num == 1) return 1;
    return fibonacci(num - 1) + fibonacci(num - 2);
}
int factorial(int num) {
    if(num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}
int main() {
    // Fibonacci number:-
    int x = 4;
    printf("%dth Fibonacci Number: %d\n", x, fibonacci(x));

    // Factorial:-
    int y = 5;
    printf("Factorial of %d: %d\n", y, factorial(y));

    
    // Pass by value and Pass by reference:-
    int num = 3;
    passbyvalue(num); // num remains as 3
    printf("Pass by Value: %d\n", num); 
    // In pass by value, the value of num is copied, and hence the passbyvalue() works on the copy of the variable
    // Pass by value changes the copy of the variable

    passbyreference(&num); //num becomes 5
    printf("Pass by Reference: %d", num);
    // In pass by value, the memory-address of num is passed, and the passbyreference() works on the address of the function
    // Pass by reference changes the actual variable

    return 0;
}
// Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones, starting with 0

#include <stdio.h>
void fibonacci(int num) {
	int x;
	int initial = 1;
	int lastNum = 0;
	for(int i = 0; i < num; i++) {
        x = initial;
		initial += lastNum;
		lastNum = x;
	}

    printf("%d", lastNum);
}
int main() {
	int num;
    scanf("%d", &num);

	fibonacci(num);
	return 0;
}
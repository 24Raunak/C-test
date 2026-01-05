// Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones, starting with 0

#include <stdio.h>
void fibonacci(int num) {
	int initial = 1;
	int lastNum = 0;
	for(int i = 0; i < num; i++) {
        int temp = initial;
		initial += lastNum;
		lastNum = temp;
	}

    printf("%d", lastNum);
}
int main() {
	int num;
    scanf("%d", &num);

	fibonacci(num);
	return 0;
}
// Reverse the digits of a number

#include <stdio.h>
void reverse(int num) {
	int rev = 0;
	while (num > 0) {
		int rem = num % 10;
		rev = rev * 10 + rem;
		num /= 10;
	}
	printf("%d", rev);
}
int main() {
	int num;
	scanf("%d", &num);

	reverse(num);
	return 0;
}
// Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.
// Inverting digit t means replacing it with digit 9 - t

#include <stdio.h>
int main() {
	char str[100];
	scanf("%101s", str);

	for(int i = 0; str[i] != '\0'; i++) {
		int digit = str[i] - 48;
		
		if(i == 0 && digit == 9) {
			continue;
		}
		if(9 - digit < digit) {
			str[i] = 9 - digit + 48;
		} else {
			continue;
		}
	}

	printf("%s", str);
	return 0;
}
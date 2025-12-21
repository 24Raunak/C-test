#include <stdio.h>
void convert(int min, int max, int step) {
	for(int i = min; i <= max; i += step) {
		int celsius = (i - 32.0) * (5.0 / 9.0);
		printf("%d %d", i, celsius);
		printf("\n");
	}
}
int main() {
	int min, max, step;
	scanf("%d", &min);
	scanf("%d", &max);
	scanf("%d", &step);

	convert(min, max, step);
	return 0;
}
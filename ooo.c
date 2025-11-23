#include <stdio.h>
int main(void) {
	int a = 3 + 5 * 2 - 5;
	int b = 4 * 2 / 3 + 1;
	double c = 4 * 2. / 3 + 1;

	printf("%d", a);
	printf("%d", b);
	printf("%.5f", c);

	return 0;
}
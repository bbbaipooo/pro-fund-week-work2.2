#include<stdio.h>
int main() {
	int x, y;
	scanf_s("%d%d", &x, &y);
	if (x >= y) {
		x = 2 * x + y;
		printf("%d", x);
	}
	if (y > x) {
		y = 2 * y + x;
		printf("%d", y);
	}
	return 0;
}
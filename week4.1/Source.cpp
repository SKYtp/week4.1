#include<stdio.h>
int main() {
	int x, y, z, a, b, c;
	printf("Enter number : ");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);
	a = x + y, b = x + z, c = y + z;
	printf("\n--------------------------\n");
	if (a >= b && a >= c) {
		printf("%d + %d is the most value", x, y);
	}
	else if (b >= a && b >= c) {
		printf("%d + %d is the most value", x, z);
	}
	else if (c >= a && c >= b) {
		printf("%d + %d is the most value", y, z);
	}
	return 0;
}
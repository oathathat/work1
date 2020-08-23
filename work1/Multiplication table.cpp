#include <stdio.h>
int main() {
	int i, n;
	printf("Enter Number of Multiplication table ");
	scanf("%d", &n);
	for (i = 1; i <= 12; ++i) {
		printf("%d x %d = %d\n", n, i, n * i);
	}
}
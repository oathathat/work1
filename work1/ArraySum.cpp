#include<stdio.h>
main() {
	int O[10], i, sump = 0, sumn = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &O[i]);
	}
	for (i = 0; i < 10; i++) {
		if (i % 2 == 0)
			sump += O[i];
		else
			sumn += O[i];
	}
	printf("%d ", sump - sumn);
}
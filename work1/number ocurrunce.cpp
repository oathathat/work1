#include<stdio.h>
main() {
	long int a[250000], n, g;
	long int i = 0;
	scanf("%ld", &n);
	if (n > 1 && n <= 2500000) {
		for (i = 0; i < n; i++) {
			scanf("%ld", &a[i]);
		}
		for (i = 0; i < n; i++)
		if (a[i] > 0 && a[i] < 1000) {
			scanf("%ld", &g);
			for (i = 0; i < n; i++) {
				if (a[i] == g) {
					printf("%ld ", i + 1);
				}
			}
		}
		else
			printf("Error");

	}

	else {
		printf("Error");
	}
}

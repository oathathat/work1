#include<stdio.h>
main() {
	int a[10000], i;
	for (i = 0; i <= 10000; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 0)
			break;
	}
	int n = i;
	for (n = i; n >= 0; n--) {
		if (a[n] != 0)
			printf("%d ", a[n]);
	}
}
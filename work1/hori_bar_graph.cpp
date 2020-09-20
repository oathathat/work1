#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, n, a[1000], j;
	for (i = 0; i < 1000; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] < 1)
			break;
	}
	n = i;
	for (i = 0; i <= n; i++) {
		for (j = 0; j < a[i]; j++) {
			printf("*");
		}
		printf("\n");
	}

}
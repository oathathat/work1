#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, a[100], i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++) {
			if (i >= j)
				printf("%d", a[i]);
		}
		printf("\n");
	}

	return 0;
}
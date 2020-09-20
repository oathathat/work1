#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, j, m, n, g[100][100];
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &g[i][j]);
		}
	}

	for (j = n - 1; j >= 0; j--)
	{
		for (i = 0; i < m; i++)
		{
			printf("%d ", g[i][j]);
		}
		printf("\n");
	}
}
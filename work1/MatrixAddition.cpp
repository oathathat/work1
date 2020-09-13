#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, j, n, m, A[100][100], B[100][100];
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &B[i][j]);
		}
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", A[i][j] + B[i][j]);
		}
		printf("\n");
	}
	return 0;

}
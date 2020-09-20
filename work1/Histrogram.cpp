#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, j, M, N, h[100][100], c;
	scanf("%d%d", &M, &N);
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++) {
			scanf("%d", &h[i][j]);
		}
	}
	for (c = 0; c <= 9; c++) {
		printf("%d ", c);
		for (i = 0; i < M; i++)
		{
			for (j = 0; j < N; j++) {
				if (h[i][j] == c)
					printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
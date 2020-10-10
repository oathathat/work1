#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, j, m, n, k, R, C, l;
	bool G[100][100];
	scanf("%d%d%d", &m, &n, &k);

	for (i = 0; i < k; i++) {
		scanf("%d%d", &R, &C);
		for (l = 0; l <= m; l++) {
			for (j = 0; j <= n; j++) {
				if (l == R - 1 && j == C - 1)
					G[l][j] = true;
			}
		}
	}


	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (G[i][j])
				printf("x");
			else
				printf("_");
		}
		printf("\n");
	}

	return 0;
}
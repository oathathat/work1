#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a[100][100], i, j, o = 0, n = 0, e = 0, f = 0, l, m;

	for (i = 0; i < 100; i++) {
		for (j = 0; j < 100; j++) {
			scanf("%d", &a[i][j]);
			if (a[i][j] < 0 || a[i][j]>1)
			{
				break;
			}
		}
		if (a[i][j] < 0 || a[i][j]>1)
		{
			break;
		}
	}

	for (l = 0; l <= i; l++) {
		for (m = 0; m < j; m++) {
			if (a[l][m] == 0 && a[l][m + 1] == 0)
			{
				o++;
			}
			else if (a[l][m] == 0 && a[l][m + 1] == 1)
			{
				n++;
			}
			else if (a[l][m] == 1 && a[l][m + 1] == 0)
			{
				e++;
			}
			else if (a[l][m] == 1 && a[l][m + 1] == 1)
			{
				f++;
			}
		}
	}
	printf("\n%d\n%d\n%d\n%d", o, n, e, f);
	return 0;
}
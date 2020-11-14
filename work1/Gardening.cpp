#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct employee
{
	int workHour[300];
	int wages;
};
int pay(int x) {
	return x * 40;
}
int main()
{
	int n, i, m, j, p1 = 0, p2 = 0, sum = 0;
	scanf("%d%d", &n, &m);
	struct employee worker[50];
	for (j = 0; j < m; j++) {
		for (i = 0; i < n; i++) {
			scanf("%d", &worker[i].workHour[j]);
		}
	}
	for (j = 0; j < m; j++) {
		for (i = 0; i < n; i++) {
			worker[i].wages += pay(worker[i].workHour[j]);
		}
	}

	int o = worker[0].wages, t = worker[0].wages;
	for (i = 0; i < n; i++)
	{
		sum += worker[i].wages;
		if (o < worker[i].wages)
		{
			p1 = i;
			o = worker[i].wages;
		}

		if (t > worker[i].wages)
		{
			p2 = i;
			t = worker[i].wages;
		}
	}

	printf("%d\n%d\n%d", sum, p1 + 1, p2 + 1);

	return 0;
}
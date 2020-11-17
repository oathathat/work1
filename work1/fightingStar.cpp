#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int count(int, int);
struct star {
	char name[31];
	int score;
};
int count(int a, int b) {
	if (a == b)
		return 1;

	else
		return 0;
}
int main()
{
	struct star who[8];
	int i, j, n;
	for (i = 0; i < 8; i++) {
		scanf("%s", &who[i].name);
	}

	scanf("%d", &n);
	int vote[10000];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &vote[i]);
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 8; j++) {
			who[j].score += count(j, vote[i] - 1);
		}
	}

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++) {
			if (who[i].score > who[j].score) {
				printf("%s\n", who[i].name);
				break;
			}
		}
	}
	return 0;
}
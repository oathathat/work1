#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char* s, A[50];
	s = A;
	scanf("%s", s);
	while (*s != '\0')
	{
		if (*s >= 'A' && *s <= 'Z')	printf("%c", *s - 'A' + 'a');
		if (*s >= 'a' && *s <= 'z')	printf("%c", *s - 'a' + 'A');
		s++;
	}

	return 0;
}
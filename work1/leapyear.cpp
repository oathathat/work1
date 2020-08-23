#include <stdio.h>
int main() {
	int year;
	printf("Enter year(A.D.) : ");
	scanf("%d", &year);
	if (year % 400 == 0) {
		printf("%d is the leap year", year);
	}
	else if (year % 100 == 0) {
		printf("%d isn't the leap year", year);
	}
	else if (year % 4 == 0) {
		printf("%d is the leap year", year);
	}
	else {
		printf("%d isn't the leap year", year);
	}

}
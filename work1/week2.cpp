#include <stdio.h>
int main() {
    unsigned long long sum;
    int n, i;
    printf("Enter number 1-65 : ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        sum *= i;
    }
    printf("Factorial of %d is %llu ", n, sum);

    return 0;
}
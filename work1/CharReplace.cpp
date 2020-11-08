#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int bouk1(int);
int main()
{
    char str[5000];
    char* ptr;

    scanf("%[^\n]", &str);
    ptr = &str[0];

    char x, y;
    scanf(" %c", &x);
    scanf(" %c", &y);

    char check[5000];
    scanf(" %s", &check);

    int len = strlen(str);

    int i;
    int j = 0;
    for (i = 0; i < len; i++)
    {
        if (*ptr == x)
        {
            if (check[j] == 'Y')
            {
                *ptr = y;

            }
            j = bouk1(j);

        }
        ptr++;
    }

    printf("%s", str);


    return 0;
}

int bouk1(int x)
{
    x = x + 1;
    return x;
}
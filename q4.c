#include <stdio.h>

int main()
{
    int n;
    printf("enter the row #: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf(" ");
        for (int j = i; j <= n - 1; j++)
            printf("*");
        for (int j = i; j <= n; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
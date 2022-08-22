#include <stdio.h>
int main(void)

{

    int m, n;
    printf("enter the width: ");
    scanf("%d", &m);
    printf("enter the width: ");
    scanf("%d", &n);

    int i, j, k;

    for (i = 1; i <= m; i++)
    {
        putchar('|');

        for (j = 1; j <= i; j++)
            putchar(' ');
        putchar('*');

        for (k = 1; k <= m - i; k++)
            putchar(' ');

        printf("|\n");
    }

    return 0;
}
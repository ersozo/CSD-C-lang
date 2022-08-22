#include <stdio.h>
int main(void)

{

    int h, w;
    printf("enter the height: ");
    scanf("%d", &h);
    printf("enter the width: ");
    scanf("%d", &w);

    int i, j;

    for (i = 1; i <= h; i++)
    {
        putchar('|');

        for (j = 1; j <= i; j++)
            putchar(' ');
        putchar('*');

        for (j = 1; j <= w - i; j++)
            putchar(' ');

        printf("|\n");
    }

    for (i = 1; i <= h; i++)
    {
        putchar('|');

        for (j = 1; j <= w - i; j++)
            putchar(' ');
        putchar('*');

        for (j = 1; j <= i; j++)
            putchar(' ');

        printf("|\n");
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int h, w;

    printf("height: ");
    scanf("%d", &h);
    printf("width: ");
    scanf("%d", &w);

    int i, j;

    for (i = 1; i <= h; i++)
    {
        putchar('|');

        if (i <= w)
        {
            for (j = 1; j <= i - 1; j++)
                putchar('-');
            putchar('*');

            for (j = 1; j <= w - i; j++)
                putchar('-');
        }

        if (i > w && i <= 2 * w)
        {
            for (j = 1; j <= 2 * w - i - 1; j++)
                putchar('-');
            putchar('*');

            for (j = 1; j <= i - w; j++)
                putchar('-');
        }

        /* 
           satır sayısı (i) ile satırdaki eleman sayısını belirleyen (j) nin değişimini,
           genişliğe (w) göre ilşkilendiremedim bir türlü. if deyimleriyle yapmaya çalıştım ancak
           aradığım çözüm olmadı. 
       */

        printf("|\n");
    }

    return 0;
}

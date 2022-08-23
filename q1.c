// #include <stdio.h>

// int pattern_odd(int x)
// {
//     int i, j;

//     for (i = 1; i <= x; i++)
//     {
//         putchar('|');
//         if (i <= x)
//         {
//             for (j = 1; j <= i - 1; j++)
//                 putchar('-');
//             putchar('*');
//             for (j = 1; j <= x - i; j++)
//                 putchar('-');
//         }
//         printf("|\n");
//     }
// }

// int pattern_even(int x)
// {
//     int i, j;
//     for (i = 1; i <= x - 1; i++)
//     {
//         putchar('|');
//         if (i <= x)
//         {
//             for (j = 1; j <= x - i - 1; j++)
//                 putchar('-');
//             putchar('*');

//             for (j = 1; j <= i; j++)
//                 putchar('-');
//         }
//         printf("|\n");
//     }
// }

// int main()
// {
//     int h, w;
//     printf("enter the height: ");
//     scanf("%d", &h);
//     printf("enter the width: ");
//     scanf("%d", &w);

//     if (w <= h)
//     {
//         int counter = 1;
//         while (counter <= h / w)
//         {
//             if (counter % 2 == 0)
//                 pattern_even(w);
//             else
//                 pattern_odd(w);
//             counter++;
//         }
//     }
//     else
//         printf("width cannot be greater than height!");

//     return 0;
// }

// solution 2
#include <stdio.h>

int main()
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
        printf("%d", i);
        if (i <= w)
        {
            for (j = 1; j <= i - 1; j++)
                putchar('-');
            putchar('*');
            for (j = 1; j <= w - i; j++)
                putchar('-');
        }
        else
        {
            for (j = 1; j <= 2 * w - i - 1; j++)
                putchar('-');
            putchar('*');

            for (j = 1; j <= i - w; j++)
                putchar('-');
        }

        printf("|\n");
    }
    return 0;
}

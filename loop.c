#include <stdio.h>

int main()
{

    int a = 0;

    for (int b = 55; b > 0; a++, b = b - a)
        ;

    printf("%d", a);

    return 0;
}
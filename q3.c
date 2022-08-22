#include <stdio.h>

int main(void)
{
    int dividend, divisor = 2;
    printf("enter the number: ");
    scanf("%d", &dividend);

    int quotient = dividend;
    printf("prime factors: ");

    while (divisor < dividend)
    {
        if (dividend % divisor == 0)
        {
            printf("%d ", divisor);
            dividend /= divisor;
        }
        else
        {
            divisor++;
        }
    }
    return 0;
}
#include <stdio.h>
#include <math.h>

void primeFactors(int val)
{
    double val_sqrt = sqrt(val);

    while (val % 2 == 0)
    {
        printf("%d ", 2);
        val = val / 2;
    }

    for (int i = 3; i <= val_sqrt; i += 2)
    {
        while (val % i == 0)
        {
            printf("%d ", i);
            val = val / i;
        }
    }

    if (val > 2)
        printf("%d ", val);
}

int main(void)
{
    int num;

    printf("enter the number: ");
    scanf("%d", &num);

    primeFactors(num);

    return 0;
}
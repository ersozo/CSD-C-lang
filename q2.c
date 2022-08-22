#include <stdio.h>
#include <math.h>

int isPrime(int val)
{
    double val_sqrt;
    if (val % 2 == 0)
        return val == 2;

    val_sqrt = sqrt(val);
    for (int i = 3; i <= val_sqrt; i += 2)
        if (val % i == 0)
            return 0;
}

int main()
{

    int val;

    printf("enter the number: ");
    scanf("%d", &val);

    for (int i = 2; i < val; i++)
        if (isPrime(i))
            printf("%d\n", i);
    printf("\n");

    return 0;
}
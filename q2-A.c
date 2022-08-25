#include <stdio.h>

void goldbach(int n)
{
    int i = 2;

    for (int j = n - i; j > 2; j--)
    {
        if (isPrime(i) == 1 && isPrime(j) == 1)
        {
            printf("%d = %d + %d\n", n, i, j);
            break;
        }
        i++;
    }
}

int isPrime(int n)
{
    int result = 1;
    for (int j = 2; j < n / 2; j++)
    {
        if ((n % j) == 0)
        {
            return result - 1;
        }
    }
    return result;
}

int main(void)
{
    int num = 0;

    while (1)
    {
        printf("enter even number:");
        scanf("%d", &num);

        if (num > 2 && num % 2 == 0)
            goldbach(num);
        else
            printf("number is not even!\n");

        printf("\n");
    }
    return 0;
}

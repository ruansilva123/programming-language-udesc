#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }

    printf("The sum of the 100 first numbers are %d.\n", sum);
}
#include <stdio.h>

int main()
{
    int pair = 0, number = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %d° integer: ", i + 1);
        scanf("%d", &number);

        if (number % 2 == 0)
        {
            pair++;
        }
    }

    printf("%d numbers are pair and %d are odd.\n", pair, 10 - pair);
}
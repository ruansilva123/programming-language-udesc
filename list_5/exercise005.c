#include <stdio.h>

int main()
{
    int number = 0, biggest = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %d° number: ", i + 1);
        scanf("%d", &number);

        if (number > biggest)
        {
            biggest = number;
        }
    }

    printf("The biggest number is %d.\n", biggest);
}
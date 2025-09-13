#include <stdio.h>

int main()
{
    int number = 0, increment = 0;

    printf("Enter a integer number: ");
    scanf("%d", &number);

    printf("Enter a integer increment: ");
    scanf("%d", &increment);

    printf("Loading... ");
    for (int i = 0; i < number; i++)
    {
        if (i % increment == 0)
        {
            printf("%d ", i);
        }
    }
    printf("%d \n", number);
}
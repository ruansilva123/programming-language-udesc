#include <stdio.h>
#define VECTOR_POSITIONS 20

int main()
{
    int numbers[VECTOR_POSITIONS] = {}, pair = 0, odd = 0;

    for (int i=0; i < VECTOR_POSITIONS; i++)
    {
        printf("Enter the %d° number: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i=0; i < VECTOR_POSITIONS; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            pair ++;
        }
        else
        {
            odd ++;
        }
    }

    printf("Pair numbers: %d \n", pair);
    printf("Odd numbers: %d \n", odd);
}
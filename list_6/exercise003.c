#include <stdio.h>
#define VECTOR_POSITIONS 5

int main()
{
    int numbers[VECTOR_POSITIONS] = {}, sum = 0;
    float average = 0.0;

    for (int i=0; i < VECTOR_POSITIONS; i++)
    {
        printf("Enter the %d° number: ", i + 1);
        scanf("%d", &numbers[i]);

        sum += numbers[i];

        average = (VECTOR_POSITIONS == i + 1) ? sum / VECTOR_POSITIONS : 0.0;
    }

    printf("The average is %.2f and the number above average are: \n", average);

    for (int i=0; i < VECTOR_POSITIONS; i++)
    {
        if (numbers[i] > average)
        {
            printf("Number %d \n", numbers[i]);
        }
    }
}
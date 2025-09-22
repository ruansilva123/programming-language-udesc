#include <stdio.h>
#define VECTOR_POSITIONS 20

int main()
{
    int numbers[VECTOR_POSITIONS] = {}, selected_number = 0, counter = 0;

    for (int i=0; i < VECTOR_POSITIONS; i++)
    {
        printf("Enter the %d° number: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Enter one number: ");
    scanf("%d", &selected_number);

    for (int i=0; i < VECTOR_POSITIONS; i++)
    {
        if (selected_number == numbers[i])
        {
            counter ++;
        }
    }

    printf("The vector contains %d number iguals %d.\n", counter, selected_number);
}
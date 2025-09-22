#include <stdio.h>
#define VECTOR_POSITIONS 10

int main()
{
    int numbers[VECTOR_POSITIONS] = {}, selected_number = 0;

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
            printf("The number %d was found in position %d.\n", selected_number, i + 1);
            return 0;
        }
    }

    printf("The number %d was not found.\n", selected_number);
}
#include <stdio.h>
#define VECTOR_POSITIONS 6

int main()
{
    float numbers[VECTOR_POSITIONS] = {1.5, 2.0, 5.8, 10.2, 11.2, 0.1}, biggest = 0.0, smaller = 0.0;

    for (int i = 0; i < VECTOR_POSITIONS; i++)
    {
        smaller = numbers[i] < smaller || i == 0 ? numbers[i] : smaller;
        biggest = numbers[i] > biggest ? numbers[i] : biggest;
    }

    printf("The biggest number is %.2f. \n", biggest);
    printf("The smaller number is %.2f. \n", smaller);
}
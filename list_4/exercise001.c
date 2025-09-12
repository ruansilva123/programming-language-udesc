#include <stdio.h>

int main()
{
    int var_a = 0, var_b = 0;

    printf("Enter an integer value for A and B:\n");
    scanf("%d %d", &var_a, &var_b);

    while (var_a != var_b)
    {
        if (var_a < var_b)
        {
            var_a += 1;
        }
        else
        {
            var_a -= 1;
        }
    }

    printf("The value for A and B are: %d and %d \n", var_a, var_b);
}
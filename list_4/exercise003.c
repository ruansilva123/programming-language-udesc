#include <stdio.h>

int is_prime_number(int number)
{
    if (number <= 1) { return 0; }

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0) { return 0; }
    }

    return 1;
}

int main()
{
    int prime_number_init_limit = 0, quantity_prime_numbers = 0, counter = 0;

    printf("Enter the prime number initialization limit: ");
    scanf("%d", &prime_number_init_limit);

    printf("Enter the number of prime numbers you want to display: ");
    scanf("%d", &quantity_prime_numbers);

    do
    {
        if (is_prime_number(prime_number_init_limit))
        {
            printf("%d ", prime_number_init_limit);
            counter += 1;
        }

        prime_number_init_limit += 1;
    } while (counter != quantity_prime_numbers); 
}
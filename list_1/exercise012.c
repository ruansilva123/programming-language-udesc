#include <stdio.h>
#include <math.h>

float sum(float first_number, float second_number) { return first_number + second_number; }
float subtraction(float first_number, float second_number) { return first_number - second_number; }
float multiplication(float first_number, float second_number) { return first_number * second_number; }
float division(float first_number, float second_number) { return first_number / second_number; }
float division_rest(float first_number, float second_number) { return (int)first_number % (int)second_number; }

int main() {
    float first_number, second_number, result;
    int option;

    printf("Write the first number: ");
    scanf("%f", &first_number);

    printf("Write the second number: ");
    scanf("%f", &second_number);

    printf("Select one option:\n\
        [1] - Sum\n\
        [2] - Subtraction\n\
        [3] - Multiplication\n\
        [4] - Division\n\
        [5] - Potentiation\n\
        [6] - Rest of the division");
    scanf("%d", &option);

    switch (option)
    {
        case 1: result = sum(first_number, second_number); break;
        case 2: result = subtraction(first_number, second_number); break;
        case 3: result = multiplication(first_number, second_number); break;
        case 4: result = division(first_number, second_number); break;
        case 5: result = pow(first_number, second_number); break;
        case 6: result = division_rest(first_number, second_number); break;
        default: printf("Invalid option."); return 0;
    }

    printf("The result is %f", result);
}

// OBS: Compile with "gcc list_1/exercise011.c -lm" to include math.h lib.
#include <stdio.h>
#include <math.h>

float sum(float first_number, float second_number) { return first_number + second_number; }
float subtraction(float first_number, float second_number) { return first_number - second_number; }
float multiplication(float first_number, float second_number) { return first_number * second_number; }
float division(float first_number, float second_number) { return first_number / second_number; }
float division_rest(float first_number, float second_number) { return (int)first_number % (int)second_number; }

int main() {
    float first_number = 0.0, second_number, result = 0.0;
    int option = 0, leave = 0;

    do {
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
            [6] - Rest of the division\n\
            [7] - Leave\n");
        scanf("%d", &option);
    
        switch (option)
        {
            case 1: result = sum(first_number, second_number); break;
            case 2: result = subtraction(first_number, second_number); break;
            case 3: result = multiplication(first_number, second_number); break;
            case 4: result = division(first_number, second_number); break;
            case 5: result = pow(first_number, second_number); break;
            case 6: result = division_rest(first_number, second_number); break;
            case 7: result = leave = 1; break;
            default: printf("Invalid option.\n");
        }

        printf("The result is %f \n", result);
    } while(leave == 0);
}

// OBS: Compile with "gcc list_4/exercise001.c -lm" to include math.h lib.
#include <stdio.h>

int main() {
    int age = 0;
    float size = 0;
    char animalType;

    printf("Enter your animal size: ");
    scanf("%f", &size);

    printf("Enter your animal age: ");
    scanf("%d", &age);

    printf("Tell us which animal you have:\n\
    [c] - Cat\n\
    [d] - Dog\n");
    scanf("%c", &animalType);

    switch (animalType)
    {
        case 'c': printf("Your animal is a cat.\n"); break;
        case 'd': printf("Your animal is a dog.\n"); break;
        default: printf("Incorrect type.\n"); return 0;
    }

    printf("Your animal size is: %.2f\n", size);
    printf("Your animal age is: %d\n", age);
}
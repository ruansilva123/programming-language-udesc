#include <stdio.h>

int my_strlen(char *string) {
    int lenght;

    while (string[lenght] != '\0')
    {
        lenght++;
    }

    return lenght;
}

int main() {
    char string[100];
    int lenght = 0;

    printf("Enter a word:");
    scanf("%s", string);

    lenght = my_strlen(string);
    printf("The word have %d characters.\n", lenght);
}
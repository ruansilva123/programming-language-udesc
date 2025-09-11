#include <stdio.h>
#include <string.h>

int main() {
    int selected_number = 0;
    char result[10];

    printf("Choose and write in CLI one number: ");
    scanf("%d", &selected_number);

    strcpy(result, (selected_number%2 == 0) ? "Pair\n" : "Odd\n");

    printf("%s", result);
}
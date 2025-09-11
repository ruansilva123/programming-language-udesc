#include <stdio.h>

int main() {
    int selected_number = 0;

    printf("Choose and write in the CLI one number: ");
    scanf("%d", &selected_number);

    if (selected_number < 0) {
        printf("Negative\n");
        return 0;
    }

    printf("Positive\n");
}
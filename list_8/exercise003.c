#include <stdio.h>

void my_strcpy(char *origin, char *destination) {
    int i = 0;

    while(origin[i] != '\0') {
        destination[i] = origin[i];
        i++;
    }

    destination[i] = '\0';
}

int main() {
    char origin[6] = {'t', 'e', 's', 't', 'e'};
    char destination[100];

    my_strcpy(origin, destination);

    printf("%s", destination);
}
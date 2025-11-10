#include <stdio.h>

void my_strcat(char *vector1, char *vector2) {
    int i=0, j=0;

    // descobrir o final do vetor
    while (vector1[i] != '\0'){
        i++;
    }

    // concatenar
    while (vector2[j] != '\0') {
        vector1[i] = vector2[j];
        i++;
        j++;
    }

    // adicionar final da strig
    vector1[i] = '\0';
}

int main() {
    char vector1[100] = "Hello, ";
    char vector2[20] = "world!";

    my_strcat(vector1, vector2);

    printf("%s \n", vector1);
}
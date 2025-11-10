#include <stdio.h>

int main() {
    int vector[3][3], line = 0, column = 0;

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("Enter the number for line %d and column %d: ", i +1, j +1);
            scanf("%d", &vector[i][j]);
        }
    }

    printf("Enter the line that you want see: ");
    scanf("%d", &line);

    printf("Enter the column that you want see: ");
    scanf("%d", &column);

    printf("The value of vector is: %d \n", vector[line -1][column -1]);
}
#include <stdio.h>

int main() {
    int side_a = 0, side_b = 0, side_c = 0;

    printf("Enter the sides of a triangle in sequence: (side A, side B, side C)\n");
    scanf("%d %d %d", &side_a, &side_b, &side_c);

    if ((side_a + side_b) < side_c) {
        printf("It's not a triangle. \n");
        return 0;
    }

    if (side_a == side_b && side_a == side_c) {
        printf("Equilateral triangle. \n");
        return 0;
    }

    if (side_a != side_b && side_a != side_c && side_b != side_c) {
        printf("Scalene triangle. \n");
        return 0;
    }

    printf("Isosceles triangle. \n");
}
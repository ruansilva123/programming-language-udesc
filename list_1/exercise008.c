#include <stdio.h>

int main() {
    const float PI = 3.14;
    float height = 0, radius = 0;

    printf("Fill the radius size: ");
    scanf("%f", &radius);

    printf("Fill the height: ");
    scanf("%f", &height);

    printf("The volume is %.2f.", PI * (radius * radius) * height);
}
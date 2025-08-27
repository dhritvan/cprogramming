#include <stdio.h>
int main() {
    float base, height;
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);
    printf("Area = %.2f\n", (base * height) / 2.0f);
    return 0;
}

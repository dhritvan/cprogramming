#include <stdio.h>
int main() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    float area = (22.0f/7.0f) * r * r;
    printf("Area = %.2f\n", area);
    return 0;
}

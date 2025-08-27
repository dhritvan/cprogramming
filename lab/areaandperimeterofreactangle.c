#include <stdio.h>
int main() {
    float L, B;
    printf("Enter length and breadth: ");
    scanf("%f %f", &L, &B);
    printf("Area = %.2f\nPerimeter = %.2f\n", L*B, 2*(L+B));
    return 0;
}

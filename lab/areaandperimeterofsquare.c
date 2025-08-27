#include <stdio.h>
int main()
{
    float L;
    printf("Enter side length: ");
    scanf("%f", &L);
    printf("Area = %.2f\nPerimeter = %.2f\n", L*L, 4*L);
    return 0;
}

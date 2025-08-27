#include <stdio.h>
int main()
{
    float g;
    printf("Enter grams: ");
    scanf("%f", &g);
    printf("Kilograms = %.3f\n", g / 1000.0f);
    return 0;
}

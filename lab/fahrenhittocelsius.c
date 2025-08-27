#include <stdio.h>
int main()
{
    float f;
    printf("Enter Fahrenheit: ");
    scanf("%f", &f);
    printf("Celsius = %.2f\n", (5.0f/9.0f) * (f - 32.0f));
    return 0;
}

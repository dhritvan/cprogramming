#include <stdio.h>
int main() 
{
    float c;
    printf("Enter Celsius: ");
    scanf("%f", &c);
    printf("Fahrenheit = %.2f\n", (9.0f/5.0f) * c + 32.0f);
    return 0;
}

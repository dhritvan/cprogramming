#include <stdio.h>
int main() 
{
    float kg;
    printf("Enter kilograms: ");
    scanf("%f", &kg);
    printf("Grams = %.0f\n", kg * 1000.0f);
    return 0;
}

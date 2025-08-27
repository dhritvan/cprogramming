#include <stdio.h>
int main() 
{
    float dollars;
    printf("Enter dollars: ");
    scanf("%f", &dollars);
    float pounds = (dollars * 48.0f) / 70.0f;
    printf("Pounds = %.2f\n", pounds);
    return 0;
}

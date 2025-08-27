#include <stdio.h>
int main()
{
    float rs;
    printf("Enter rupees: ");
    scanf("%f", &rs);
    printf("Dollars = %.2f\n", rs / 48.0f);
    return 0;
}

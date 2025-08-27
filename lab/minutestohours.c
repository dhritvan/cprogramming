#include <stdio.h>
int main()
{
    int m;
    printf("Enter minutes: ");
    scanf("%d", &m);
    printf("Hours = %.2f\n", m / 60.0f);
    return 0;
}

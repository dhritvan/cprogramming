#include <stdio.h>
int main() {
    float gross;
    printf("Enter gross amount: ");
    scanf("%f", &gross);
    float net = gross - 0.10f * gross;
    printf("Net amount = %.2f\n", net);
    return 0;
}

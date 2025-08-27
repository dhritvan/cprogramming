#include <stdio.h>
int main() {
    float gross;
    printf("Enter gross salary: ");
    scanf("%f", &gross);
    float allowance = 0.10f * gross;
    float deduction = 0.03f * gross;
    float net = gross + allowance - deduction;
    printf("Net salary = %.2f\n", net);
    return 0;
}

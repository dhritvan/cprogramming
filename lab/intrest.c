#include <stdio.h>
int main() {
    float P, R, N;
    printf("Enter Principal, Rate, Time: ");
    scanf("%f %f %f", &P, &R, &N);
    printf("Interest = %.2f\n", P * R * N / 100.0f);
    return 0;
}

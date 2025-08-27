#include <stdio.h>
int main() {
    float s1, s2, s3;
    printf("Enter three marks: ");
    scanf("%f %f %f", &s1, &s2, &s3);
    float total = s1 + s2 + s3;
    float avg = total / 3.0f;
    printf("Total = %.2f\nAverage = %.2f\n", total, avg);
    return 0;
}

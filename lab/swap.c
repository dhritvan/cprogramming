#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    c = a; a = b; b = c;
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}

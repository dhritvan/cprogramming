#include <stdio.h>
int main()
{
    double bytes;
    printf("Enter bytes: ");
    scanf("%lf", &bytes);
    double kb = bytes / 1024.0;
    double mb = kb / 1024.0;
    double gb = mb / 1024.0;
    printf("KB = %.4f\nMB = %.4f\nGB = %.6f\n", kb, mb, gb);
    return 0;
}

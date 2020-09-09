#include <stdio.h>

int main()
{
    double a;
    scanf("%lf", &a);
    int i;
    for (i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4lf\n", i, a);
        a /= 2.0;
    }

    return 0;
}
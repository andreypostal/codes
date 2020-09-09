#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a;
    scanf("%f", &a);
    for (int i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4f\n", i, a);
        a /= 2.0;
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

long long int mmc(long long int n1, long long int n2)
{
    long long int resto = 1, a, b;
    a = n1;
    b = n2;
    while (resto)
    {
        resto = a % b;
        a = b;
        b = resto;
    }

    return n1 * n2 / a;
}

int main()
{
    long long int a, b, c;

    while (scanf(" %lld %lld %lld", &a, &b, &c) && a && b && c)
    {
        long long int r = floor(a / b) + floor(a / c) - floor(a / mmc(b, c));
        printf("%lld\n", r);
    }

    return 0;
}
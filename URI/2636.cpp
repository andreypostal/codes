#include <bits/stdc++.h>

using namespace std;

int isPrime(long long n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main()
{
    long long int n, nf[3];

    while (scanf(" %lld", &n) && n)
    {

        int ct = 0;
        for (long long int i = 2; i < n; i++)
        {
            if (n % i == 0 && isPrime(i))
            {
                nf[ct] = i;
                ct++;
            }

            if (ct == 3)
                break;
        }

        printf("%lld = %lld x %lld x %lld\n", n, nf[0], nf[1], nf[2]);
    }
    return 0;
}
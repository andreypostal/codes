#include <bits/stdc++.h>

using namespace std;

unsigned long long int p[1000010];

int main()
{
    unsigned long long int n, m, aux;
    while (scanf(" %llu %llu", &n, &m) != EOF)
    {
        memset(p, 0, sizeof p);

        for (int i = 0; i < n; i++)
        {
            scanf(" %llu", p + i);
        }

        sort(p, p + n, greater<unsigned long long int>());

        unsigned long long int s = 0;

        for (int i = 0; i < m; i++)
            s = (s + p[i]) % 1000000007;

        printf("%llu\n", s % 1000000007);
    }
    return 0;
}
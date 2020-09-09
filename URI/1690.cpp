#include <bits/stdc++.h>

using namespace std;

unsigned long long ns[10100];

int main()
{
    int t, n;
    scanf(" %d", &t);

    while (t--)
    {
        unsigned long long mn = INT_MAX;
        scanf(" %d", &n);
        for (int i = 0; i < n; i++)
            scanf(" %llu", &ns[i]), mn = min(mn, ns[i]);

        unsigned long long res = 1;
        bool achou = false;
        if (mn == 1)
        {
            sort(ns, ns + n);
            for (int i = 0; i < n && ns[i] <= res; i++)
                res += ns[i];
        }
        printf("%llu\n", res);
    }

    return 0;
}
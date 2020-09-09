#include <bits/stdc++.h>

using namespace std;

int p[110];

int main()
{
    int n, k, aux;
    while (scanf(" %d %d", &n, &k) && n)
    {
        memset(p, 0, sizeof(p));

        for (int i = 0; i < n; i++)
            scanf(" %d", &aux), p[aux]++;

        int ans = 0;
        for (int i = 0; i < 105; i++)
            if (p[i] >= k)
                ans++;

        printf("%d\n", ans);
    }
    return 0;
}
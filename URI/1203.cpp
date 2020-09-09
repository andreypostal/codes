#include <bits/stdc++.h>

using namespace std;

int r, k, dp[5000], visitado[110];

int calc(int ind, int total, int *rp)
{
    if (total == 0)
        return 1;

    if (total < 0)
        return 0;

    if (dp[total] != -1)
        return dp[total];

    for (int i = 0; i < r; i++)
    {
        if (visitado[i] || !rp[i])
            continue;

        visitado[i] = 1;
        if (calc(i, total - rp[i], rp))
            return dp[total - rp[i]] = 1;

        visitado[i] = 0;
    }

    return dp[total] = 0;
}

int main()
{
    int rp[110];

    while (scanf(" %d %d", &r, &k) != EOF)
    {
        int aux, aux2;

        for (int i = 0; i < r; i++)
            rp[i] = 0, visitado[i] = 0;

        for (int i = 0; i <= k; i++)
            dp[i] = -1;

        for (int i = 0; i < k; i++)
            scanf(" %d %d", &aux, &aux2), rp[aux - 1]++, rp[aux2 - 1]++;

        printf(((calc(0, k, rp)) ? "S\n" : "N\n"));
    }

    return 0;
}
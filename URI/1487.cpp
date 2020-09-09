#include <bits/stdc++.h>

using namespace std;

int atr[200][2], pd[200][700];
int n, t;

int calc(int i, int total)
{
    if (i == n)
        return 0;

    if (total <= 0)
        return 0;

    if (pd[i][total] != -1)
        return pd[i][total];

    int npg = calc(i + 1, total);
    int mesmo = 0;
    int pg = 0;

    if (total - atr[i][0] >= 0)
    {
        pg = calc(i + 1, total - atr[i][0]) + atr[i][1];
        mesmo = calc(i, total - atr[i][0]) + atr[i][1];
    }

    return pd[i][total] = max(max(pg, npg), mesmo);
}

int main()
{
    int i = 0;
    while (scanf(" %d %d", &n, &t) && n)
    {
        i++;
        memset(pd, -1, sizeof(pd));

        for (int i = 0; i < n; i++)
            scanf(" %d %d", &atr[i][0], &atr[i][1]);

        int res = calc(0, t);
        printf("Instancia %d\n", i);
        printf("%d\n\n", res);
    }

    return 0;
}
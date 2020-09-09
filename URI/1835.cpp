#include <bits/stdc++.h>

#define MAXN 110

using namespace std;
vector<int> nodes[MAXN];

bool visto[MAXN];

void dfs(int v)
{
    visto[v] = true;

    for (int u : nodes[v])
    {
        if (!visto[u])
        {
            dfs(u);
        }
    }
}

int main()
{
    int t;
    scanf(" %d", &t);

    for (int i = 1; i <= t; i++)
    {
        for (int j = 0; j < MAXN; j++)
            visto[j] = false, nodes[j].clear();

        int n, m, x, y;
        scanf(" %d %d", &n, &m);
        for (int j = 0; j < m; j++)
        {
            scanf(" %d %d", &x, &y);
            nodes[x].push_back(y);
            nodes[y].push_back(x);
        }

        dfs(1);
        int total = 0;
        for (int i = 1; i <= n; i++)
            if (!visto[i])
            {
                dfs(i);
                total++;
                i = 1;
            }

        printf("Caso #%d: ", i);
        if (!total)
            printf("a promessa foi cumprida\n", total);
        else
            printf("ainda falta(m) %d estrada(s)\n", total);
    }
    return 0;
}
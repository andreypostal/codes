#include <bits/stdc++.h>
#define SIZE 2400

using namespace std;

int n;
vector<int> grafo[SIZE];
vector<int> reverso[SIZE];
list<int> pilha;
bool visto[SIZE];

void dfs(int v)
{
    visto[v] = true;

    for (int u : grafo[v])
    {
        if (!visto[u])
        {
            dfs(u);
        }
    }

    pilha.push_back(v);
}

// os vértices que cada uma dessas buscas visitar, resulta em um componente
// retorna a quantidade de vértices no componente desse vértice
int dfs2(int v)
{
    int c = 1;

    visto[v] = true;

    for (int u : reverso[v])
    {
        if (!visto[u])
        {
            c += dfs2(u);
        }
    }

    return c;
}

int main()
{
    int m;
    while (scanf(" %d %d", &n, &m) && n)
    {

        for (int i = 0; i < m; i++)
        {
            int v, w, p;
            scanf(" %d %d %d", &v, &w, &p);

            grafo[v].push_back(w);
            reverso[w].push_back(v);
            if (p == 2)
            {
                grafo[w].push_back(v);
                reverso[v].push_back(w);
            }
        }

        memset(visto, false, sizeof(visto));

        for (int v = 1; v <= n; v++)
            if (!visto[v])
                dfs(v);

        memset(visto, false, sizeof(visto));

        int res = 1;

        while (!pilha.empty() && res)
        {
            int v = pilha.back();
            pilha.pop_back();

            if (!visto[v])
            {
                int c = dfs2(v);
                if (c != n)
                    res = 0;
            }
        }

        for (int i = 0; i < n + 5; i++)
        {
            grafo[i].clear();
            reverso[i].clear();
            pilha.clear();
        }

        printf("%d\n", res);
    }
    return 0;
}
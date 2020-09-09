#include <bits/stdc++.h>

using namespace std;

#define SIZE 100001

vector<int> nodes[SIZE];

int n, dist[SIZE];
bool visitado[SIZE];

void addAdj(int a, int b)
{
    nodes[a].push_back(b);
}

bool bfs(int o, int dest)
{
    list<int> queue;

    visitado[o] = true; // marca a origem como visitado
    dist[o] = 0;        // distancia para ela mesma eh 0
    queue.push_back(o); // adiciona a fila de visitação

    while (!queue.empty())
    {
        int u = queue.front();
        queue.pop_front();

        for (int a : nodes[u])
        {
            if (visitado[a] == false)
            {
                visitado[a] = true;
                dist[a] = min(dist[a], dist[u] + 1);
                queue.push_back(a);

                if (a == dest)
                    return true;
            }
        }
    }

    return false;
}

int main()
{

    int o, d, k, aux;
    while (scanf(" %d %d %d", &o, &d, &k) && o)
    {
        for (int i = 0; i <= SIZE; i++)
        {
            visitado[i] = false;
            dist[i] = INT_MAX;
        }

        for (int i = 0; i < k; i++)
        {
            scanf(" %d", &aux);
            visitado[aux] = true;
        }

        for (int i = 1; i < SIZE; i++)
        {
            int b1 = i - 1, b2 = i + 1, b3 = i / 2, b4 = i * 2, b5 = i * 3;
            if (b1 > 0)
                addAdj(i, b1);
            if (b2 < SIZE)
                addAdj(i, b2);
            if (i % 2 == 0)
                addAdj(i, b3);
            if (b4 < SIZE)
                addAdj(i, b4);
            if (b5 < SIZE)
                addAdj(i, b5);
        }

        if (!bfs(o, d))
            printf("-1\n");
        else
            printf("%d\n", dist[d]);
    }

    return 0;
}
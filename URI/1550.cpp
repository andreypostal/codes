#include <bits/stdc++.h>

#define SIZE 10001

using namespace std;

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

    int t, o, d, k, aux;
    scanf(" %d", &t);
    while (t--)
    {
        scanf(" %d %d", &o, &d);

        for (int i = 1; i < SIZE; i++)
        {

            visitado[i] = false;
            dist[i] = INT_MAX;
            nodes[i].clear();

            int b1 = i + 1;
            string str = to_string(i), st = "";
            int sz = str.size();

            for (int j = sz - 1; j >= 0; j--)
                st += str[j];
            st[sz] = '\0';

            if (b1 < SIZE)
                addAdj(i, b1);

            addAdj(i, stoi(st));
        }

        bfs(o, d);

        printf("%d\n", dist[d]);
    }

    return 0;
}
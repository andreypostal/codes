#include <bits/stdc++.h>

using namespace std;

vector<char> adj[300];
bool visitado[300];

void insere(char a, char b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}

int main()
{
    int t, n, m;
    char a, b;

    scanf(" %d", &t);
    for (int h = 1; h <= t; h++, putchar('\n'))
    {
        memset(visitado, 0, sizeof(visitado));
        for (int i = 'a'; i <= 'z'; i++)
            adj[i].resize(0);

        scanf(" %d %d", &n, &m);
        for (int i = 0; i < m; i++)
        {
            scanf(" %c %c", &a, &b);
            insere(a, b);
        }

        set<char> s[n + 1];

        int ans = 0;

        for (int i = 'a'; i < 'a' + n; i++)
        {
            if (!visitado[i])
            {
                ans++;
                list<char> lista;
                lista.push_back(i);
                while (!lista.empty())
                {
                    char a = lista.front();
                    lista.pop_front();

                    if (visitado[a])
                        continue;

                    visitado[a] = true;
                    s[ans].insert(a);

                    for (char b : adj[a])
                        lista.push_back(b);
                }
            }
        }

        printf("Case #%d:\n", h);
        for (int i = 1; i <= ans; i++)
        {
            for (char c : s[i])
                printf("%c,", c);
            putchar('\n');
        }

        cout << ans << " connected components" << endl;
    }
    return 0;
}
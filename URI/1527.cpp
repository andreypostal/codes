#include <bits/stdc++.h>

using namespace std;

#define MAXC 100100

int n, m;
int jg[MAXC];
int pontos[MAXC];

int conexao(int a)
{
    if (jg[a] == a)
        return a;

    return jg[a] = conexao(jg[a]);
}

int main()
{
    while (scanf(" %d %d", &n, &m) && n + m)
    {
        for (int i = 1; i <= n; i++)
            scanf(" %d", pontos + i), jg[i] = i;

        int a, b, c;
        int ans = 0;

        while (m--)
        {
            scanf(" %d %d %d", &a, &b, &c);
            if (a == 1)
            {
                int x = conexao(b);
                int y = conexao(c);
                pontos[y] += pontos[x];
                jg[x] = y;
            }
            else
            {
                int r = conexao(1);
                int ca = conexao(b);
                int cb = conexao(c);
                // cout << r << endl;
                // cout << "CA " << ca << " " << pontos[ca] << endl;
                // cout << "CB " << cb << " " << pontos[cb] << endl
                //      << endl;
                ans += ((r == ca && pontos[ca] > pontos[cb]) || (r == cb && pontos[cb] > pontos[ca]));
            }
        }

        printf("%d\n", ans);
    }
    return 0;
}
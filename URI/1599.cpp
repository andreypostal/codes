#include <bits/stdc++.h>

using namespace std;

int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {1, -1, 0, 0, 1, -1, -1, 1};
int mt[1010][1010];

set<pair<int, int>> r;

int main()
{
    int n, m, x, y, h;
    while (scanf(" %d %d", &n, &m) != EOF)
    {
        r.clear();

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                scanf(" %d", &h);
                mt[i][j] = h;
                // cout << h << " i " << i << " j " << j << " = " << mt[i][j] << endl;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                bool maior = false;
                for (int k = 0; k < 8; k++)
                {
                    // cout << "i " << i << " j " << j << " = " << mt[i][j] << endl;
                    //cout << "ni " << i + dy[k] << " x nj " << j + dx[k] << " = ";
                    if (i + dy[k] >= 1 && i + dy[k] <= n && j + dx[k] >= 1 && j + dx[k] <= m)
                    {
                        //cout << mt[i + dy[k]][j + dx[k]] << " <> " << mt[i][k] << endl;
                        maior = (mt[i + dy[k]][j + dx[k]] >= mt[i][j] || maior);
                    }
                    //cout << endl;
                }

                if (!maior)
                {
                    r.insert(make_pair(i, j));
                }
            }
        }

        if (r.size())
            for (pair<int, int> a : r)
                printf("%d %d\n", a.first, a.second);
        else
            printf("-1\n");

        putchar('\n');
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

string fim[110];
string errada[110];
int pd[110][110];
int n, m;

int treco(int atual, int obj)
{
    if (obj >= n)
    {
        if (m - atual > 0)
            return (m - atual) * 30;
        return 0;
    }

    if (pd[atual][obj] != -1)
        return pd[atual][obj];

    int remover = INT_MAX;
    int trocar = INT_MAX;
    int inserir = INT_MAX;

    if (atual >= m || errada[atual] != fim[obj])
    {
        if (atual < m)
        {
            remover = treco(atual + 1, obj) + 30;
            trocar = treco(atual + 1, obj + 1) + 60;
        }

        inserir = treco(atual, obj + 1) + 150;
    }
    else
    {
        return treco(atual + 1, obj + 1);
    }

    return pd[atual][obj] = min(min(remover, trocar), inserir);
}

int main()
{
    int t, r;

    scanf(" %d", &t);

    for (int i = 1; i <= t; i++)
    {
        for (int j = 0; j < 110; j++)
            for (int k = 0; k < 110; k++)
                pd[j][k] = -1;

        scanf(" %d %d", &r, &m);

        for (int j = 0; j < m; j++)
        {
            cin >> errada[j];
        }

        scanf(" %d", &n);
        for (int j = 0; j < n; j++)
        {
            cin >> fim[j];
        }

        double res;
        if (n == 0)
            res = m * 30.0 / 60.0 * r;
        else
            res = (treco(0, 0) / 60.0) * r;

        int it = res;
        int dc = (res - it) * 100;

        string dec = to_string(dc);
        if (dec.size() < 2)
            dec = '0' + dec;

        cout << "Caso #" << i << ": R$ " << it << "," << dec << endl;
    }

    return 0;
}
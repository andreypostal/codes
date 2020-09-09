#include <bits/stdc++.h>

using namespace std;

vector<int> casas;
int res[100100];

int main()
{
    int n, m, aux;

    scanf(" %d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &aux);
        casas.push_back(aux);
    }

    for (int i = 0; i < n; i++)
    {
        int lim = m + 1;
        if (i + 1 < n)
            lim = casas[i + 1];

        for (int j = casas[i]; j < lim; j++)
            res[j] = i;
    }

    int ini = m / (n - 1);

    for (int i = ini; i > 0; i--)
    {
        int mx = 0;

        for (int j = 0; j < casas[1]; j++)
        {
            int pos = j;
            int tot = 1;

            while (true)
            {
                if (tot > n)
                    break;

                if (pos > m)
                    break;

                int prox = pos + i;

                if (prox <= m && res[prox] - res[pos] == 1)
                    tot++;

                pos += i;
            }

            if (tot == n)
            {
                mx = max(mx, i);
            }
        }
        if (mx != 0)
        {
            printf("%d\n", mx);
            return 0;
        }
    }

    return 0;
}
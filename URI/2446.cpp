#include <bits/stdc++.h>

using namespace std;

int moedas[1100], pd[1100][100100];
int v, m;

int compra(int i, int val)
{
    if (val == 0)
        return pd[i][val] = 1;

    if (i == m || val < 0)
        return pd[i][val] = -1;

    if (pd[i][val])
        return pd[i][val];

    int npg = compra(i + 1, val);
    int pg = -1;
    if (npg != 1)
        pg = compra(i + 1, val - moedas[i]);

    return pd[i][val] = max(npg, pg);
}

int main()
{
    scanf(" %d %d", &v, &m);

    for (int i = 0; i < m; i++)
        scanf(" %d", &moedas[i]);

    int res = compra(0, v);

    if (res == 1)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
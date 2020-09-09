#include <bits/stdc++.h>

using namespace std;

char tb[520][520];
int n, total, visitada[520][520], segura[520][520];

int verifica(int i, int j)
{

    if (i < 0 || i >= n || j < 0 || j >= n)
        return 0;

    if (visitada[i][j])
    {
        if (segura[i][j] == 1)
            return 1;
        else if (segura[i][j] == -1)
            return 0;

        return 1;
    }

    visitada[i][j] = 1;

    char c = tb[i][j];
    //cout << '[' << i << 'x' << j << "] = " << c << endl;

    int ret;

    if (c == '>')
        ret = verifica(i, j + 1);
    else if (c == '<')
        ret = verifica(i, j - 1);
    else if (c == 'A')
        ret = verifica(i - 1, j);
    else if (c == 'V')
        ret = verifica(i + 1, j);

    if (ret)
        segura[i][j] = 1;
    else
        segura[i][j] = -1;

    return ret;
}

int main()
{
    scanf(" %d", &n);

    getchar_unlocked();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
            tb[i][j] = getchar_unlocked();
    }

    total = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            total += verifica(i, j);

    printf("%d\n", total);

    return 0;
}
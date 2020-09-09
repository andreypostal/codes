#include <bits/stdc++.h>

using namespace std;

char mt[550][550];
int n, m;

void escorre(int i, int j)
{
    if (mt[i][j] == '.')
    {
        if (i - 1 >= 0 && mt[i - 1][j] == 'o')
        {
            mt[i][j] = 'o';
        }
        if (j - 1 >= 0 && mt[i][j - 1] == 'o' && i + 1 < n && mt[i + 1][j - 1] == '#')
        {
            mt[i][j] = 'o';
        }
        if (j + 1 < m && mt[i][j + 1] == 'o' && i + 1 < n && mt[i + 1][j + 1] == '#')
        {
            mt[i][j] = 'o';
        }
    }
}

int main()
{
    scanf(" %d %d", &n, &m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf(" %c", &mt[i][j]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            escorre(i, j);
        for (int j = m - 1; j >= 0; j--)
            escorre(i, j);
    }

    for (int i = 0; i < n; i++)
        printf("%s\n", mt[i]);

    return 0;
}
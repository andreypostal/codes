#include <bits/stdc++.h>

using namespace std;

string str[55];
int n, m;

void contaminacao(int i, int j, int c)
{
    if (i == n)
        return;

    if (str[i][j] == 'T')
    {
        if (i + 1 < n && str[i + 1][j] == 'A')
        {
            str[i + 1][j] = 'T';
            contaminacao(i + 1, j, 0);
        }

        if (i - 1 >= 0 && str[i - 1][j] == 'A')
        {
            str[i - 1][j] = 'T';
            contaminacao(i - 1, j, 0);
        }

        if (j - 1 >= 0 && str[i][j - 1] == 'A')
        {
            str[i][j - 1] = 'T';
            contaminacao(i, j - 1, 0);
        }

        if (j + 1 < m && str[i][j + 1] == 'A')
        {
            str[i][j + 1] = 'T';
            contaminacao(i, j + 1, 0);
        }
    }

    if (c)
    {
        j++;

        if (j == m)
        {
            j = 0;
            i++;
        }

        contaminacao(i, j, c);
    }
}

int main()
{
    while (scanf(" %d %d", &n, &m) && n && m)
    {
        getline(cin, str[0]);
        for (int i = 0; i < n; i++)
        {
            getline(cin, str[i]);
        }

        contaminacao(0, 0, 1);

        for (int i = 0; i < n; i++)
            cout << str[i] << endl;

        printf("\n");
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

vector<string> str;

int main()
{
    int n, m;
    scanf(" %d", &n);

    string st;

    for (int i = 0; i < n; i++)
    {
        cin >> st;
        str.push_back(st);
    }

    scanf(" %d", &m);

    for (int k = 0; k < m; k++)
    {
        cin >> st;
        int total = 0;
        int maior = -1;
        int tot = st.size();
        for (int i = 0; i < n; i++)
        {
            bool igual = true;
            for (int j = 0; j < tot; j++)
            {
                if (str[i][j] != st[j])
                    igual = false;
            }

            if (igual)
            {
                total++;
                int sz = str[i].size();
                if (sz > maior)
                    maior = sz;
            }
        }
        if (total == 0)
            printf("-1\n");
        else
            printf("%d %d\n", total, maior);
    }

    return 0;
}
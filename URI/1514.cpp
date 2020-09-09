#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    while (scanf(" %d %d", &n, &m) && n && m)
    {
        int c1 = 1, c2 = 1, c3 = 1, c4 = 0;
        int tr[m], tj = 0;
        for (int i = 0; i < m; i++)
            tr[i] = 0;

        for (int i = 0; i < n; i++)
        {
            int r = 0, aux;
            for (int j = 0; j < m; j++)
            {
                scanf(" %d", &aux);
                tr[j] += aux;
                r += aux;
            }

            if (r == m)
            {
                c1 = 0;
            }

            if (r > 0)
                tj++;
        }

        for (int i = 0; i < m; i++)
        {
            if (!tr[i])
            {
                c2 = 0;
            }

            if (tr[i] == n)
            {
                c3 = 0;
            }

            if (!c2 && !c3)
                break;
        }

        if (tj == n)
        {
            c4 = 1;
        }

        printf("%d\n", c1 + c2 + c3 + c4);
    }
    return 0;
}
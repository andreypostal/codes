#include <bits/stdc++.h>

using namespace std;

int main()
{

    int l, c, nl, nc;
    while (scanf(" %d %d", &l, &c) && l && c)
    {
        char str[110][110], res[110][110];

        for (int i = 0; i < l; i++)
        {
            scanf(" %s", str[i]);
        }

        scanf(" %d %d", &nl, &nc);

        nl = nl / l;
        nc = nc / c;

        int ct;

        for (int i = 0; i < l; i++)
        {
            ct = 0;
            for (int j = 0; j < c; j++)
            {
                for (int k = 0; k < nc; k++)
                {
                    res[i][ct] = str[i][j];
                    ct++;
                }

                res[i][ct] = '\0';
            }
        }

        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < nl; j++)
                printf("%s\n", res[i]);
        }

        printf("\n");
    }
    return 0;
}
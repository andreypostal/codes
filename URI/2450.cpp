#include <bits/stdc++.h>

using namespace std;

int d[505];

int main()
{
    int n, m;
    scanf(" %d %d", &n, &m);

    int c1 = 1, aux, pe = -1;
    char r = 'S';
    for (int i = 0; i < n; i++)
    {
        int sl = 0;
        for (int j = 0; j < m; j++)
        {
            scanf(" %d", &aux);

            if (!sl && aux && pe >= j)
                r = 'N';

            if (!sl && aux && pe < j)
                pe = j;

            sl += aux;
        }

        if (sl && !c1)
            r = 'N';

        if (!sl)
            c1 = 0;
    }

    printf("%c\n", r);

    return 0;
}
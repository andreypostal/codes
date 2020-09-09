#include <bits/stdc++.h>

using namespace std;

unordered_map<int, int> vl;

int main()
{
    int n, aux, m;
    while (scanf(" %d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf(" %d", &aux);
            vl[aux] = i + 1;
        }

        scanf(" %d", &m);

        int pos = vl[m];
        bool sair = false, res = false;
        int ini = 2;

        while (!sair)
        {
            // printf("pos %d <> ini %d\n", pos, ini);

            if (pos % ini == 0)
            {
                //printf("Fin pos %d <> ini %d\n", pos, ini);
                sair = true;
            }
            else
            {
                pos -= floor(pos / ini);

                if (pos < ini)
                {
                    sair = true;
                    res = true;
                }
            }

            ini++;
        }

        if (res)
            printf("Y\n");
        else
            printf("N\n");

        vl.clear();
    }
    return 0;
}
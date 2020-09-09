#include <bits/stdc++.h>

using namespace std;

int mtz[10][10], col[10][10], cont[10];

int main()
{
    int n, aux, soma[10][10];

    scanf(" %d", &n);

    for (int l = 1; l <= n; l++)
    {
        for (int i = 0; i < 10; i++)
        {
            cont[i] = 0;
            for (int j = 0; j < 10; j++)
                mtz[i][j] = col[i][j] = 0;
        }

        printf("Instancia %d\n", l);

        bool res = true;

        for (int i = 0; i < 9; i++)
        {
            int total = 0;

            for (int j = 0; j < 9; j++)
            {
                scanf(" %d", &aux);

                if (!mtz[i][aux])
                    total++;

                soma[i][j] = aux;

                mtz[i][aux] = 1;
                col[j][aux] = 1;
            }

            if (total < 9)
                res = false;

            if (res && (i + 1) % 3 == 0)
            {
                for (int a = 0; a < 3; a++)
                {
                    total = 0;
                    for (int j = i - 2; j < i + 1; j++)
                    {
                        for (int k = 0; k < 3; k++)
                        {
                            if (!cont[soma[j][k + (a * 3)]])
                                total++;
                            cont[soma[j][k + (a * 3)]] = 1;
                        }
                    }

                    for (int j = 0; j < 10; j++)
                        cont[j] = 0;

                    if (total < 9)
                    {
                        res = false;
                    }
                }
            }
        }

        for (int i = 0; i < 9 && res; i++)
            for (int j = 1; j < 10 && res; j++)
                if (!col[i][j])
                    res = false;

        if (res)
            printf("SIM\n");
        else
            printf("NAO\n");
        printf("\n");
    }

    return 0;
}
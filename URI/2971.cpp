#include <bits/stdc++.h>

using namespace std;

int jg[15][15];

int rankCarta(char carta)
{
    if (carta == 'A')
        return 1;
    else if (carta == 'D')
        return 10;
    else if (carta == 'Q')
        return 11;
    else if (carta == 'J')
        return 12;
    else if (carta == 'K')
        return 13;

    return carta - '0';
}

int main()
{
    int n, k;
    char ch;
    scanf(" %d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf(" %c", &ch);
            jg[i][rankCarta(ch)]++;
        }
    }

    int i = k - 1;
    int curinga = i;
    bool rec = true;

    while (true)
    {
        for (int j = 0; j < n; j++)
        {
            for (int l = 1; l < 14; l++)
            {
                if (jg[j][l] == 4 && curinga != j)
                {
                    printf("%d\n", j + 1);
                    return 0;
                }
            }
        }

        int prox = (i + 1) % n;
        if (i == curinga && !rec)
        {
            curinga = prox;
            rec = true;
        }
        else
        {
            int mx = 15;
            int ct = 0;

            for (int j = 1; j < 14; j++)
                if (jg[i][j] > 0 && jg[i][j] < mx)
                {
                    mx = jg[i][j];
                    ct = j;
                    if (mx == 1)
                        break;
                }

            jg[i][ct]--;
            jg[prox][ct]++;
            rec = false;
        }

        i = prox;
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int feiticos[1010][2];
int f, hp, pd[1010][2020];
bool morreu;

int calc(int i, int limite)
{
    if (pd[i][limite] != -1)
        return pd[i][limite];

    if (limite <= 0)
    {
        morreu = true;
        return 0;
    }

    if (i >= f)
    {
        if (limite > 0)
            return 10000000;

        morreu = true;
        return 0;
    }

    int usa = calc(i + 1, limite - feiticos[i][0]) + feiticos[i][1];
    int nusa = calc(i + 1, limite);

    return pd[i][limite] = min(usa, nusa);
}

int main()
{
    while (scanf(" %d %d", &f, &hp) != EOF)
    {
        memset(pd, -1, sizeof(pd));

        for (int i = 0; i < f; i++)
            scanf(" %d %d", &feiticos[i][0], &feiticos[i][1]);

        morreu = false;
        long int mana = calc(0, hp);

        if (morreu)
            printf("%ld\n", mana);
        else
            printf("-1\n");
    }

    return 0;
}
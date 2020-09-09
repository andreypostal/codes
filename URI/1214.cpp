#include <bits/stdc++.h>

using namespace std;

int notas[110];

int main()
{
    int n, e, aux;
    scanf(" %d", &n);

    while (n--)
    {
        int total = 0;
        scanf(" %d", &e);

        for (int i = 0; i < 105; i++)
            notas[i] = 0;

        for (int i = 0; i < e; i++)
        {
            scanf(" %d", &aux);
            notas[aux]++;
            total += aux;
        }

        total = (total / e) + 1;

        int acima = 0;

        for (int i = total; i < 102; i++)
            acima += notas[i];

        printf("%.3f", ((float)acima * 100.0) / (float)e);
        putchar('%');
        putchar('\n');
    }

    return 0;
}
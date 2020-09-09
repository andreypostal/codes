#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y;
    while (scanf(" %d", &n) != EOF)
    {
        int v[110], ant[110], maior;
        for (int i = 0; i < 110; i++)
            v[i] = ant[i] = 0;

        for (int i = 0; i < n; i++)
        {
            scanf(" %d %d", &x, &y);
            for (int j = x; j <= y; j++)
            {
                v[j]++;
            }
        }

        scanf(" %d", &n);
        if (v[n])
        {
            int total = 0;
            for (int i = 1; i < n; i++)
                total += v[i];

            printf("%d found from %d to %d\n", n, total, total + v[n] - 1);
        }
        else
            printf("%d not found\n", n);
    }
    return 0;
}
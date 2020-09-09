#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, bolas, x, y, xb, yb, menor, resposta;

    scanf(" %d", &n);

    while (n--)
    {
        menor = INT_MAX;

        scanf(" %d %d %d", &bolas, &xb, &yb);

        for (int i = 1; i <= bolas; i++)
        {
            scanf(" %d %d", &x, &y);

            int dist = (x - xb) * (x - xb) + (y - yb) * (y - yb);

            if (dist < menor)
            {
                resposta = i;
                menor = dist;
            }
        }

        printf("%d\n", resposta);
    }

    return 0;
}
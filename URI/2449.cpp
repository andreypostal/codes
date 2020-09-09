#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, aux;

    scanf(" %d %d", &n, &m);

    int dif = 0;
    int r = 0;

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &aux);
        dif = m - (aux + dif);
        r += abs(dif);
    }

    printf("%d\n", r);

    return 0;
}
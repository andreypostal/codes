#include <bits/stdc++.h>

using namespace std;

struct sensor
{
    double x, y, r;
    bool visitado;
    vector<int> adjacencia;
} vet[1010];

int m, n, k;

int busca(int n)
{
    if (n == k + 1 || n == k + 2)
        return 1;

    if (vet[n].visitado)
        return 0;

    vet[n].visitado = true;
    for (int it : vet[n].adjacencia)
    {
        if (busca(it))
            return 1;
    }

    return 0;
}

int main()
{
    cin >> m >> n >> k;
    for (int i = 0; i < k; i++)
    {
        scanf(" %lf %lf %lf", &vet[i].x, &vet[i].y, &vet[i].r);
        vet[i].visitado = false;

        if (vet[i].y <= vet[i].r)
        {
            vet[i].adjacencia.push_back(k + 1);
        }

        if (vet[i].x + vet[i].r >= m)
        {
            vet[i].adjacencia.push_back(k + 2);
        }

        if (vet[i].x <= vet[i].r)
        {
            vet[k].adjacencia.push_back(i);
        }

        if (vet[i].y + vet[i].r >= n)
        {
            vet[k + 3].adjacencia.push_back(i);
        }

        for (int j = 0; j < i; j++)
        {
            if (hypot(vet[i].x - vet[j].x, vet[i].y - vet[j].y) <= vet[i].r + vet[j].r)
            {
                vet[i].adjacencia.push_back(j);
                vet[j].adjacencia.push_back(i);
            }
        }
    }

    if (busca(k) || busca(k + 3))
        cout << "N\n";
    else
        cout << "S\n";

    return 0;
}
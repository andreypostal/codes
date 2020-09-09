#include <bits/stdc++.h>

using namespace std;

map<int, int> m;

int main()
{
    int n, aux, k;

    while (scanf(" %d", &n) != EOF && n)
    {
        for (int i = 1; i <= n; i++)
        {
            scanf(" %d", &aux);
            m[i] = aux;
        }
        scanf(" %d", &k);
        auto a = m.find(k);

        bool sair = false;
        int res = 0;

        while (!sair)
        {
            auto b = (m.find((*a).second));
            res = (*b).first;

            if ((*b).first == (*b).second)
                sair = true;

            a = b;
        }

        printf("%d\n", res);
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, lista[105], aux;
    cin >> n;
    while (n--)
    {
        int a = 0;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> aux;
            if (aux % 2 != 0)
            {
                lista[a] = aux;
                a++;
            }
        }
        if (a)
        {
            sort(lista, lista + a);
            int lim = ceil(a / 2);
            if (a % 2 == 0)
                lim--;
            for (int i = 0; i <= lim; i++)
            {
                int i1 = a - i - 1;
                if (i1 != i)
                {
                    printf("%d ", lista[i1]);
                }
                printf("%d", lista[i]);
                if (i != lim && i != i1)
                    printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}
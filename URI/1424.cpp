#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, aux, aux2;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        map<int, vector<int>> a;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &aux);
            a[aux].push_back(i + 1);
        }
        for (int i = 0; i < m; i++)
        {
            scanf("%d %d", &aux, &aux2);
            if (aux > a[aux2].size())
                printf("0\n");
            else
                printf("%d\n", (a[aux2][aux - 1]) ? (a[aux2][aux - 1]) : 0);
        }
    }

    return 0;
}
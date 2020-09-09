#include <bits/stdc++.h>

using namespace std;

int p[110];

bool compara(string a, string b)
{
    int dif = 0;
    int sz = min(a.size(), b.size());
    for (int i = 0; i < sz; i++)
    {
        if (a[i] != b[i])
            dif++;
        if (dif >= 2)
            return false;
    }
    return true;
}

int main()
{
    int n;
    while (scanf(" %d", &n) && n)
    {
        //cout << n << endl;
        getchar();
        map<string, string> ass;
        string aux, aux2;
        for (int i = 0; i < n; i++)
            cin >> aux >> aux2,
                ass[aux] = aux2;

        scanf("%d", &n);
        getchar();
        int ans = 0;
        while (n--)
        {
            cin >> aux >> aux2;
            if (!compara(ass[aux], aux2))
            {
                //cout << aux << " <> " << aux2 << " " << ass[aux] << endl;
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
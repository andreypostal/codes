#include <bits/stdc++.h>

using namespace std;

map<long long int, long long int> d;
int total;

int main()
{
    long long int n, aux;
    while (scanf(" %lld", &n) != EOF && n)
    {
        total = 0;
        for (int i = 0; i < n; i++)
        {
            scanf(" %lld", &aux);
            d[aux]++;
            if (d[aux] % 2 != 0)
            {
                total++;
            }
            else
            {
                total--;
            }
        }

        int i = 0;
        for (auto a : d)
        {
            if (a.second % 2 != 0)
            {
                i++;
                printf("%lld", a.first);

                if (i < total)
                    printf(" ");
            }
        }
        cout << endl;
        d.clear();
    }

    return 0;
}
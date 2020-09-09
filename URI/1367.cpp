#include <bits/stdc++.h>

using namespace std;

map<char, int> mp;

int main()
{
    int n, pnt, total, tempoFinal;
    char c, res[100];

    while (scanf(" %d", &n) && n)
    {
        mp.clear();
        total = 0;
        tempoFinal = 0;
        while (n--)
        {
            scanf(" %c %d %s", &c, &pnt, res);

            if (!strcmp(res, "correct"))
            {
                if (mp[c] != -1)
                {
                    tempoFinal += mp[c] + pnt;
                    total++;
                }
                mp[c] = -1;
            }
            else
            {
                if (mp[c] != -1)
                    mp[c] += 20;
            }
        }

        printf("%d %d\n", total, tempoFinal);
    }
    return 0;
}
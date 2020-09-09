#include <bits/stdc++.h>

using namespace std;

map<int, pair<int, int>> mp;
string nomes[110];
vector<int> f;

int main()
{
    int n, t;
    string nome, presencas;

    scanf(" %d", &t);

    while (t--)
    {

        f.clear();
        mp.clear();

        scanf(" %d", &n);
        for (int i = 0; i < n; i++)
        {
            cin >> nome;
            mp[i].first = 0;
            mp[i].second = 0;
            nomes[i] = nome;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> presencas;
            int sz = presencas.size();
            for (int j = 0; j < sz; j++)
            {
                if (presencas[j] == 'P')
                {
                    mp[i].first++;
                    mp[i].second++;
                }
                else if (presencas[j] == 'A')
                    mp[i].second++;
            }
        }

        for (auto a : mp)
        {
            if (100. * (float)a.second.first / (float)a.second.second < 75.0)
                f.push_back(a.first);
        }
        int sz = f.size();

        for (int i = 0; i < sz; i++)
        {
            if (i)
                printf(" ");
            cout << nomes[f[i]];
        }

        putchar('\n');
    }

    return 0;
}
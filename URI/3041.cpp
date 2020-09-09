#include <bits/stdc++.h>

using namespace std;

bool orderFirst(const pair<int, int> a, const pair<int, int> b)
{
    return a.first > b.first;
}

bool orderSecond(const pair<int, int> a, const pair<int, int> b)
{
    return a.second > b.second;
}

int main()
{
    int n, artigos, aux, total;
    while (scanf(" %d", &n) && n)
    {
        total = 0;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            scanf(" %d", &aux);
            total += aux;
            v.push_back(make_pair(aux, 0));
        }

        sort(v.begin(), v.end(), orderFirst);

        scanf(" %d", &artigos);

        while (artigos && total > 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i].second < v[i].first)
                {
                    v[i].second++;
                    artigos--;
                    total--;
                }

                if (!artigos)
                    break;
            }
        }

        if (artigos)
        {
            printf("Impossible\n");
        }
        else
        {
            sort(v.begin(), v.end(), orderSecond);
            for (int i = 0; i < n; i++)
                printf("%d\n", v[i].second);
        }
    }

    return 0;
}
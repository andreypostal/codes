#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (!a.second)
    {
        if (!b.second)
            return a.first < b.first;
        return true;
    }
    else
    {
        if (!b.second)
            return false;
        return a.first > b.first;
    }
}

int main()
{
    int n;
    scanf(" %d", &n);
    pair<int, int> v[100100];
    for (int i = 0; i < n; i++)
        scanf(" %d", &v[i].first), v[i].second = v[i].first % 2;

    sort(v, v + n, cmp);

    for (int i = 0; i < n; i++)
        printf("%d\n", v[i].first);
    return 0;
}
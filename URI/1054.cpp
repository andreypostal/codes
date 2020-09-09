#include <bits/stdc++.h>

using namespace std;

void solve()
{
    vector<pair<int, char>> pedras;

    int p, d, n;
    char c;
    scanf(" %d %d", &p, &d);

    for (int i = 0; i < p; i++)
    {
        scanf(" %c-%d", &c, &n);
        pedras.push_back({n, c});
    }

    pedras.push_back({d, 'B'});

    for (int i = p; i > 0; i--)
        pedras[i].first -= pedras[i - 1].first;

    int pulo = 0;

    for (int i = 0; i <= p; i++)
    {
        if (pedras[i].second == 'S')
            pulo = max(pulo, pedras[i].first + pedras[i + 1].first);
        else
            pulo = max(pulo, pedras[i].first);
    }

    cout << pulo << endl;
}

int main()
{
    int t;
    scanf(" %d", &t);
    for (int i = 1; i <= t; i++)
    {
        printf("Case %d: ", i);
        solve();
    }
    return 0;
}
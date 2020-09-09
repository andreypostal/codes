#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, aux;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> ct(n);
    queue<int> c;

    for (int i = 0; i < n; i++)
        scanf(" %d", &v[i]);

    for (int i = 0; i < m; i++)
        scanf(" %d", &aux), c.push(aux);

    int tempo = INT_MAX;
    int ans = 0;

    while (!c.empty())
    {
        for (int i = 0; i < n && !c.empty(); i++)
        {
            if (ct[i] != 0)
            {
                tempo = min(tempo, ct[i]);
                continue;
            }

            int a = c.front();
            c.pop();
            int b = v[i];

            ct[i] = b * a;
            tempo = min(tempo, b * a);
        }

        ans += tempo;
        for (int i = 0; i < n; i++)
            ct[i] -= tempo;
    }
    ans += *max_element(ct.begin(), ct.end());

    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

string a, b;
int sz;

bool good(int n)
{
    int ind = 0, nt = 0, tot = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[ind])
            nt++;

        if (nt >= n)
            ind++, tot++, nt = 0;
    }

    return tot >= b.size();
}

void solve(int caso)
{
    cin >> a >> b;

    int l = 0;
    int r = 1e6;
    while (r > l + 1)
    {
        int m = (l + r) / 2;
        if (good(m))
            l = m;
        else
            r = m;

        //cout << m << " " << good(m) << endl;
    }

    //cout << good(1) << endl;

    cout << l << endl;
}

int main()
{
    int t;
    scanf(" %d", &t);
    while (t--)
        solve(t);
    return 0;
}
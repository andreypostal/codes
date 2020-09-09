#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c, s, ans = 0;
    int a = 1;
    cin >> n >> c >> s;

    if (a == s)
        ans++;

    while (c--)
    {

        int aux;
        cin >> aux;
        a += aux;
        if (a == 0)
            a = n;
        if (a > n)
            a = 1;

        if (a == s)
            ans++;
    }

    cout << ans << endl;

    return 0;
}
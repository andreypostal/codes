#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << "1" << endl;
    else if (n == 2)
        cout << "0" << endl;
    else
    {
        vector<int> f(n + 1, 0);

        f[1] = 1;
        for (int i = 3; i <= n; i++)
            f[i] = (f[i - 2] + f[i - 3]) % mod;

        cout << f[n] << endl;
    }

    return 0;
}
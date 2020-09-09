#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int t = 0;

    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        t += s[i] - 48;
    }

    if (t % 3 == 0)
        cout << 0 << endl;
    else if ((t - 1) % 3 == 0)
        cout << 1 << endl;
    else
        cout << 2 << endl;
    return 0;
}

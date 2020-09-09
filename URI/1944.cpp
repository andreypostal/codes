#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str = "FACE";
    int ans = 0;
    while (n--)
    {
        char st[5];
        scanf(" %c %c %c %c", st, st + 1, st + 2, st + 3);
        st[4] = '\0';
        int sz = str.size();
        if (st[0] == str[sz - 1] && st[1] == str[sz - 2] && st[2] == str[sz - 3] && st[3] == str[sz - 4])
        {
            ans++;
            str = str.substr(0, sz - 4);
        }
        else
        {
            str += st;
        }

        if (str.size() == 0)
            str = "FACE";
        //cout << str << endl;
    }

    cout << ans << endl;

    return 0;
}
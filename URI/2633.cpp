#include <bits/stdc++.h>

using namespace std;

map<int, string> mp;

int main()
{
    int n;
    while (scanf(" %d", &n) != EOF)
    {
        mp.clear();
        string str;
        int a;
        for (int i = 0; i < n; i++)
        {
            cin >> str >> a;
            mp[a] = str;
        }

        int i = 1;
        for (auto b : mp)
        {
            cout << b.second;
            if (i == n)
                cout << endl;
            else
                cout << " ";
            i++;
        }
    }

    return 0;
}
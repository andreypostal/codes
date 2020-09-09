#include <bits/stdc++.h>

using namespace std;

map<string, string> mp;

int main()
{
    int n;
    scanf(" %d", &n);
    getchar();
    string str, str2;
    while (n--)
    {
        getline(cin, str);
        getline(cin, str2);
        mp[str] = str2;
    }

    scanf(" %d", &n);
    getchar();
    while (n--)
    {
        getline(cin, str);
        getline(cin, str2);
        cout << str << endl;
        cout << mp[str2] << endl
             << endl;
    }

    return 0;
}
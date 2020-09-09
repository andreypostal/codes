#include <bits/stdc++.h>

using namespace std;

map<char, char> mp;

int main()
{
    int n, c;
    string str1, str2;
    while (scanf(" %d %d", &c, &n) != EOF)
    {
        getline(cin, str1);
        getline(cin, str1);
        getline(cin, str2);

        for (int i = 0; i < c; i++)
        {
            mp[str2[i]] = str1[i];
            mp[tolower(str2[i])] = tolower(str1[i]);
            mp[str1[i]] = str2[i];
            mp[tolower(str1[i])] = tolower(str2[i]);
        }

        for (int j = 0; j < n; j++)
        {
            getline(cin, str1);
            for (int i = 0; i < str1.size(); i++)
            {
                char ch = str1[i];
                if (mp.count(ch))
                    str1[i] = mp[str1[i]];
            }

            cout << str1 << endl;
        }

        printf("\n");

        mp.clear();
    }
    return 0;
}
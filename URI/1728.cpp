#include <bits/stdc++.h>

using namespace std;

map<string, string> mp;

int main()
{
    string str;

    while (getline(cin, str))
    {
        int sz = str.size();
        string n = "";
        int cnt2 = 0, nm[3];

        for (int i = sz - 1; i >= -1; i--)
        {
            if (i == -1 || str[i] == '=' || str[i] == '+')
            {
                n[n.size()] = '\0';
                nm[cnt2] = stoi(n);
                n = "";
                cnt2++;
            }
            else
            {
                n += str[i];
            }
        }

        if (nm[2] + nm[1] == nm[0])
            printf("True\n");
        else
            printf("False\n");

        if (str == "0+0=0")
            return 0;
    }

    return 0;
}
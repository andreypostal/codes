#include <bits/stdc++.h>

using namespace std;

map<string, int> mp;

int main()
{
    int n, a;
    while (scanf(" %d", &n) != EOF)
    {
        mp.clear();

        mp["INTRUSOS"] = 0;
        mp["EHD"] = 0;
        mp["EPR"] = 0;

        for (int i = 0; i < n; i++)
        {
            string str;
            cin >> str >> str;
            if (str != "EPR" && str != "EHD")
                str = "INTRUSOS";

            mp[str]++;
        }

        cout << "EPR: " << mp["EPR"] << endl;
        cout << "EHD: " << mp["EHD"] << endl;
        cout << "INTRUSOS: " << mp["INTRUSOS"] << endl;
    }

    return 0;
}
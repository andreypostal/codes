#include <bits/stdc++.h>

using namespace std;

map<string, string> mp;

int main()
{
    mp["vacar"] = "aguia";
    mp["vaoni"] = "pomba";
    mp["vmoni"] = "homem";
    mp["vmher"] = "vaca";
    mp["iihem"] = "pulga";
    mp["iiher"] = "lagarta";
    mp["iahem"] = "sanguessuga";
    mp["iaoni"] = "minhoca";

    string st1, st2, st3;
    cin >> st1 >> st2 >> st3;
    string res = "";
    res += st1[0];
    res += st2[0];
    res += st3[0];
    res += st3[1];
    res += st3[2];

    //cout << res << endl;
    cout << mp[res] << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

map<string, int> a;

int main()
{
    string as, m;
    while (cin >> as >> m)
    {
        if (!a.count(as) || a[as] > 0)
            a[as]++;

        a[m] = -1;
    }

    printf("HALL OF MURDERERS\n");

    for (auto p : a)
    {
        if (p.second > 0)
        {
            if (p.second > 0)
                cout << p.first << ' ' << p.second << endl;
        }
    }

    return 0;
}
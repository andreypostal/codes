#include <bits/stdc++.h>

using namespace std;

map<string, int> v;
int n;

int main()
{
    string str;
    double total = 0;

    scanf("%d", &n);
    cin.ignore();
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        while (getline(cin, str) && str.size() > 0)
        {
            v[str]++;
            total++;
        }

        for (pair<string, int> a : v)
        {
            double pct = (a.second * 100.0) / total;
            cout << a.first << ' ';
            printf("%.4f\n", pct);
        }

        if (i < n - 1)
            cout << endl;

        v.clear();
        total = 0;
    }

    return 0;
}
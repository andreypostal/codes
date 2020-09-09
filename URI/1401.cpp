#include <bits/stdc++.h>

using namespace std;

set<string> strs;

void perm(string a, int l, int r)
{
    if (l == r)
        strs.insert(a);
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            perm(a, l + 1, r);
            swap(a[l], a[i]);
        }
    }
}

int main()
{
    int n;
    scanf(" %d", &n);
    string str;

    while (n--)
    {
        cin >> str;
        perm(str, 0, str.size() - 1);
        int sz = strs.size();

        for (auto a : strs)
            cout << a << endl;

        printf("\n");

        strs.clear();
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int m, n;
    scanf(" %d %d", &m, &n);
    getchar();
    map<string, string> d;
    string a, b;
    for (int i = 0; i < m; i++)
    {
        getline(cin, a);
        getline(cin, b);
        d[a] = b;
    }

    for (int i = 0; i < n; i++)
    {
        string p = "";
        bool esp = false;
        while (true)
        {
            char c = getchar();
            if (c != ' ' && c != '\n')
                p += c;
            else
            {
                if (esp)
                    putchar(' ');

                if (d.count(p))
                {
                    cout << d[p];
                }
                else
                {
                    cout << p;
                }
                p = "";
                esp = true;
            }

            if (c == '\n')
                break;
        }
        putchar('\n');
    }
}

int main()
{
    int t;
    scanf(" %d", &t);
    for (int i = 0; i < t; i++)
    {
        solve();
        putchar('\n');
    }
    return 0;
}
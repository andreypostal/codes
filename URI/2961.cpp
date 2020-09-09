#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    pair<int, int> r[4] = {{0, 1}, {0, 2}, {0, 3}, {0, 4}};

    while (n--)
    {
        string aux;
        getline(cin, aux);
        string p[4], v[4];
        for (int i = 0; i < 4; i++)
            getline(cin, p[i]);

        getline(cin, aux);
        for (int i = 0; i < 4; i++)
            getline(cin, v[i]);

        for (int i = 0; i < 4; i++)
        {
            if (v[i] == p[i])
                r[i].first++;
        }
    }

    sort(r, r + 4);

    printf("%d", r[0].second);
    for (int i = 1; r[i].first == r[i - 1].first; i++)
        printf(" %d", r[i].second);
    putchar('\n');

    return 0;
}
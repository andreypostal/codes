#include <bits/stdc++.h>

using namespace std;

int b[1010];

int main()
{
    int n, a;
    scanf(" %d", &n);

    while (scanf(" %d", &a) != EOF)
    {
        b[a] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!b[i])
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
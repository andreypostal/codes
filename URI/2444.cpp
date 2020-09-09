#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v, n, aux;

    scanf(" %d %d", &v, &n);
    while (n--)
    {
        scanf(" %d", &aux);
        v = max(min(v + aux, 100), 0);
    }

    cout << v << endl;

    return 0;
}
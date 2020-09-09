#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, m, s, x, y, h;

    scanf(" %lld %lld %lld", &n, &m, &s);

    long long int ex1 = 0, ex2 = 0;

    for (int i = 0; i < s; i++)
    {
        scanf(" %lld %lld %lld", &x, &y, &h);

        long long int res = n * y - m * x;

        if (res < 0)
            ex2 += h;
        else
            ex1 += h;
    }

    cout << ex1 << " " << ex2 << endl;

    return 0;
}
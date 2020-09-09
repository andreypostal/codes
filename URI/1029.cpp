#include <bits/stdc++.h>

using namespace std;

int chamadas;

int fib(int a)
{
    if (a == 1)
        return 1;
    if (a == 0)
        return 0;

    chamadas++;

    return fib(a - 1) + fib(a - 2);
}

int main()
{
    int x, n;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> n;
        chamadas = 0;
        int j = fib(n);
        cout << "fib(" << n << ") = " << chamadas * 2 << " calls = " << j << endl;
    }

    return 0;
}
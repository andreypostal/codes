#include <bits/stdc++.h>

using namespace std;

long long int pd[100];

long long int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    if (pd[n] > 0)
    {
        return pd[n];
    }

    pd[n] = fib(n - 1) + fib(n - 2);
    return pd[n];
}

int main()
{
    for (int i = 0; i < 65; i++)
        pd[i] = -1;
    int n, aux;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        cout << "Fib(" << aux << ") = " << fib(aux) << endl;
    }

    return 0;
}
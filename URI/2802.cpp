#include <bits/stdc++.h>

using namespace std;

long long int t[1010][1010];

int main()
{
    long long n;
    cin >> n;
    long long i = ((n * (n - 1) * (n - 2) * (n - 3)) / (1 * 2 * 3 * 4));
    long long s = (n * (n - 1) / 2);

    cout << i + s + 1 << endl;

    return 0;
}
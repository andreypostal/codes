#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, r;
    cin >> r >> n;
    long long ans = floor(n / ((r * r * r * 4 * 3.1415) / 3));
    cout << ans << endl;
    return 0;
}
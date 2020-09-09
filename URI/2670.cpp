#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1, a2, a3, r1, r2, r3;
    cin >> a1 >> a2 >> a3;

    r1 = (a2 * 1 + a3 * 2) * 2;
    r2 = (a1 * 1 + a3 * 1) * 2;
    r3 = (a1 * 2 + a2 * 1) * 2;

    cout << min(min(r1, r2), r3) << endl;

    return 0;
}

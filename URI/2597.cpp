#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c, n;

    cin >> c;
    while (c--)
    {
        cin >> n;
        cout << n - (int)sqrt(n) << endl;
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    double n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int i = 0;
        while (n > 1)
            n = n / 2.0, i++;
        cout << i << " dias" << endl;
    }
    return 0;
}
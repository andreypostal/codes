#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n[4];
    for (int i = 0; i < 4; i++)
        cin >> n[i];

    sort(n, n + 4);

    if (n[3] < n[1] + n[2] || n[3] < n[1] + n[0] || n[3] < n[0] + n[2] || n[2] < n[0] + n[1])
        cout << 'S' << endl;
    else
        cout << 'N' << endl;

    return 0;
}

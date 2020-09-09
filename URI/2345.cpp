#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v[5];
    for (int i = 0; i < 4; i++)
        cin >> v[i];

    sort(v, v + 4);
    cout << abs((v[0] + v[3]) - (v[1] + v[2])) << endl;

    return 0;
}
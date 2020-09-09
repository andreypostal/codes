#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, m;
    while (scanf(" %d %d", &h, &m) != EOF)
    {
        int hf = 12 * h / 360;
        int mf = 30 * m / 180;

        string hr = to_string(hf);
        string mn = to_string(mf);

        if (hr.size() < 2)
            hr = '0' + hr;
        if (mn.size() < 2)
            mn = '0' + mn;

        cout << hr << ":" << mn << endl;
    }

    return 0;
}
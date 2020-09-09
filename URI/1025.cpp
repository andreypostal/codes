#include <bits/stdc++.h>

using namespace std;

int n, m, x;
vector<int> a;

int main()
{
    int h = 0;
    while (true)
    {
        cin >> n >> m;
        if (n == 0)
            break;
        h++;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }

        sort(a.begin(), a.end());

        cout << "CASE# " << h << ":" << endl;

        for (int i = 0; i < m; i++)
        {
            cin >> x;
            if (binary_search(a.begin(), a.end(), x))
            {
                cout << x << " found at " << equal_range(a.begin(), a.end(), x).first - a.begin() + 1 << endl;
            }
            else
            {
                cout << x << " not found" << endl;
            }
        }

        a.clear();
    }
    return 0;
}

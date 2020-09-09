#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, x;
    while (true)
    {
        cin >> N;
        if (N == 0)
            break;
        x = sqrt(N);
        for (int i = 1; i <= x; i++)
        {
            if (i == x)
            {
                cout << i * i << endl;
            }
            else
            {
                cout << i * i << " ";
            }
        }
    }
    return 0;
}

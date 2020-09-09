#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s;
    while (scanf(" %d %d", &n, &s) != EOF)
    {
        int x = -1, y = -1, mx = n * n;
        ;
        for (int i = n, dif = 0; i > 0 && x == -1 && y == -1; i -= 2, dif++)
        {
            for (int j = i - 1; j >= 0 && x == -1 && y == -1; j--)
            {
                if (mx == s)
                {
                    x = j + dif;
                    y = 0 + dif;
                }
                mx--;
            }

            for (int j = 1; j < i && x == -1 && y == -1; j++)
            {
                if (mx == s)
                {
                    x = 0 + dif;
                    y = j + dif;
                }
                mx--;
            }

            for (int j = 1; j < i && x == -1 && y == -1; j++)
            {
                if (mx == s)
                {
                    x = j + dif;
                    y = i - 1 + dif;
                }
                mx--;
            }

            for (int j = i - 2; j > 0 && x == -1 && y == -1; j--)
            {
                if (mx == s)
                {
                    x = i - 1 + dif;
                    y = j + dif;
                }
                mx--;
            }
        }

        cout << y << " " << x << endl;
    }
    return 0;
}
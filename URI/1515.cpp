#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (scanf(" %d", &n) && n)
    {
        char res[55], str[55];
        int m = 2200, y, a;
        for (int i = 0; i < n; i++)
        {
            scanf(" %s %d %d", str, &y, &a);
            if (y - a < m)
            {
                strcpy(res, str);
                m = y - a;
            }
        }

        printf("%s\n", res);
    }
    return 0;
}
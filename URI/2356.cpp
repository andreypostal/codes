#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;

    while (cin >> a >> b)
    {
        int sz = a.size();
        int szb = b.size();

        bool seq = false;
        for (int i = 0; i < sz; i++)
        {
            seq = true;
            for (int j = i, k = 0; j < szb + i; j++, k++)
            {
                if (a[j] != b[k])
                {
                    seq = false;
                    break;
                }
            }

            if (seq)
            {
                printf("Resistente\n");
                break;
            }
        }

        if (!seq)
            printf("Nao resistente\n");
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    while (getline(cin, str))
    {
        int sz = str.size();

        for (int i = 0; i < sz; i++)
        {
            int j = i + 1;
            if (j < sz)
            {
                if (!(str[i] == ' ' && (str[j] == '.' || str[j] == ',')))
                    putchar(str[i]);
            }
            else
            {
                putchar(str[i]);
            }
        }
        putchar('\n');
    }

    return 0;
}
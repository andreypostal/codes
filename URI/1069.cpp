#include <bits/stdc++.h>
using namespace std;

int N, c1, c2, res;

int main()
{
    string str;
    cin >> N;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    for (int i = 0; i < N; i++)
    {
        c1 = 0;
        c2 = 0;
        res = 0;
        getline(cin, str);
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[j] == '<')
                c1++;
            if (str[j] == '>')
            {
                if (c1 > c2)
                {
                    res++;
                    c2++;
                }
            }
        }

        cout << res << endl;
    }

    return 0;
}

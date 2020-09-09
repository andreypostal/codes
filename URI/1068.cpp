#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        int r = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ')')
                r--;
            if (s[i] == '(')
                r++;
            if (r < 0)
                break;
        }
        if (r == 0)
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        string n = "";
        int zero = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= '0' && str[i] <= '9')
            {
                if (str[i] == '0')
                {
                    if (n.length() > 0)
                        n += str[i];
                    else
                        zero = 1;
                }
                else
                    n += str[i];
            }
            else if (str[i] == 'o' || str[i] == 'O')
            {
                if (n.length() > 0)
                    n += '0';
                else
                    zero = 1;
            }
            else if (str[i] == 'l')
                n += '1';
            else if (str[i] != ' ' && str[i] != ',')
            {
                n = "error";
                break;
            }
        }
        long long int res = -1;
        if (n.length() == 0)
        {
            n = "error";
            if (zero)
                res = 0;
        }
        else if (n != "error")
        {
            if (n.length() > 10)
                n = "error";
            else
            {
                res = stoll(n);
                if (res > 2147483647)
                {
                    res = -1;
                    n = "error";
                }
            }
        }

        if (res < 0)
            cout << n << endl;
        else
            cout << res << endl;
    }
    return 0;
}
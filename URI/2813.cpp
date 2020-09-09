#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ida = 0, volta = 0, s1 = 0, s2 = 0;
    string a, b, bant = "sol", aant = "sol";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a == "chuva")
        {
            if (bant == "sol")
            {
                s2++;
                if (!s1)
                    ida++;
                else
                    s1--;
            }
            else
            {
                s1--;
                s2++;
            }
        }
        aant = a;
        if (b == "chuva")
        {
            if (aant == "sol")
            {
                s1++;
                if (!s2)
                    volta++;
                else
                    s2--;
            }
            else
            {
                s2--;
                s1++;
            }
        }
        bant = b;

        //cout << s1 << " - " << ida << " x " << volta << " - " << s2 << endl;
    }

    cout << ida << " " << volta << endl;
    return 0;
}
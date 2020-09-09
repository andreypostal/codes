#include "bits/stdc++.h"
using namespace std;

int main()
{
    string str, cpf(""), num("");
    double res = 0;

    getline(cin, str);

    bool decimal = false;
    int sz = str.size(), cnt = 0, cntd = 0;

    for (int i = 0; i < sz; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            cnt++;
            if (cnt <= 11)
                cpf += str[i];
            else
            {
                num += str[i];
                if (decimal)
                    cntd++;
                if (cntd == 2)
                    break;
            }
        }
        else if (str[i] == '.')
        {
            if (decimal)
                break;
            if (cnt >= 11)
            {
                decimal = true;
                num += '.';
            }
        }
    }

    res += stod(num);

    getline(cin, str);
    sz = str.size();
    decimal = false;
    num = "";
    cntd = 0;

    for (int i = 0; i < sz; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            cnt++;
            if (cnt <= 11)
                cpf += str[i];
            else
            {
                num += str[i];
                if (decimal)
                    cntd++;
                if (cntd == 2)
                    break;
            }
        }
        else if (str[i] == '.')
        {
            if (decimal)
                break;
            if (cnt >= 11)
            {
                decimal = true;
                num += '.';
            }
        }
    }

    res += stod(num);
    cout << "cpf " << cpf << endl;
    printf("%.2f\n", res);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        int som = 1, tot1 = 0, tot2 = 0;
        for (int i = 0, j = 9; i < 14; i++)
        {
            if (i == 3 || i == 7 || i == 13)
            {
                som--;
            }
            else
            {
                if (i < 11)
                {
                    tot1 += (str[i] - '0') * (i + som);
                    tot2 += (str[i] - '0') * j;
                }
                else
                {
                    int a = tot1 % 11;
                    int b = tot2 % 11;

                    if (a == 10)
                        a = 0;
                    if (b == 10)
                        b = 0;

                    if (a == str[12] - '0' && b == str[13] - '0')
                        printf("CPF valido\n");
                    else
                        printf("CPF invalido\n");

                    break;
                }
                j--;
            }
        }
    }
    return 0;
}
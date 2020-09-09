#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int n;
    bool primeiro = true;

    while (scanf("%d", &n) && n)
    {
        if (!primeiro)
            putchar('\n');
        primeiro = false;

        getchar();
        string m[n + 1];

        int maior = 0;

        for (int i = 0; i < n; i++)
        {
            m[i] = "";
            getline(cin, str);

            int total = 0;
            bool achou = false;

            for (int j = 0; j < str.size(); j++)
            {
                if (str[j] != ' ')
                {
                    achou = true;
                    m[i] += str[j];
                    total++;
                    //cout << " -- " << str[j];
                }
                else
                {
                    if (j + 1 < str.size() && str[j + 1] != ' ' && achou)
                    {
                        m[i] += ' ';
                        total++;
                        //cout << " -- " << ' ';
                    }
                }
            }

            //cout << endl;

            maior = max(maior, total);
        }

        //cout << maior << endl;

        for (int i = 0; i < n; i++)
        {
            int espacos = maior - m[i].size();
            //cout << maior << " - " << m[i].size() << endl;
            while (espacos--)
                putchar(' ');

            cout << m[i] << endl;
        }
    }

    return 0;
}
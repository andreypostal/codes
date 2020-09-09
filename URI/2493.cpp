#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (scanf(" %d", &n) != EOF)
    {
        int n1, n2, res;
        string str;

        vector<pair<pair<int, int>, int>> expr;
        set<string> perd;

        for (int i = 0; i < n; i++)
        {
            scanf(" %d", &n1);
            cin >> str;
            int sz = str.size();
            string stN = "";
            for (int i = 0; i < sz; i++)
            {
                if (str[i] == '=')
                {
                    stN[stN.size()] = '\0';
                    n2 = stoi(stN);
                    stN = "";
                }
                else
                    stN += str[i];
            }

            stN[stN.size()] = '\0';
            res = stoi(stN);

            expr.push_back(make_pair(make_pair(n1, n2), res));
        }

        char c;
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            scanf(" %d %c", &n1, &c);
            if (c == '+')
            {
                if (expr[n1 - 1].first.first + expr[n1 - 1].first.second != expr[n1 - 1].second)
                    perd.insert(str);
            }
            else if (c == '-')
            {
                if (expr[n1 - 1].first.first - expr[n1 - 1].first.second != expr[n1 - 1].second)
                    perd.insert(str);
            }
            else if (c == '*')
            {
                if (expr[n1 - 1].first.first * expr[n1 - 1].first.second != expr[n1 - 1].second)
                    perd.insert(str);
            }
            else
            {
                if ((expr[n1 - 1].first.first + expr[n1 - 1].first.second == expr[n1 - 1].second) ||
                    (expr[n1 - 1].first.first - expr[n1 - 1].first.second == expr[n1 - 1].second) ||
                    (expr[n1 - 1].first.first * expr[n1 - 1].first.second == expr[n1 - 1].second))
                    perd.insert(str);
            }
        }

        int sz = perd.size();
        if (sz == 0)
        {
            printf("You Shall All Pass!\n");
        }
        else if (sz == n)
        {
            printf("None Shall Pass!\n");
        }
        else
        {
            int j = 1;
            for (string a : perd)
            {
                cout << a;
                if (j == sz)
                    printf("\n");
                else
                    printf(" ");
                j++;
            }
        }
    }
    return 0;
}
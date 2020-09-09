#include <bits/stdc++.h>

using namespace std;

int mx, dp[20200];
map<char, string> cod;
map<string, char> decod;
map<string, int> qtd;

int pd(string c, int i)
{
    if (i >= c.size())
        return 1;

    if (dp[i] != -1)
        return dp[i];

    string p;
    long long resp = 0;
    for (int j = 0; j < mx && j + i < c.size(); j++)
    {
        p += c[i + j];
        if (decod[p])
        {
            resp += pd(c, i + j + 1);

            if (resp > 1 || qtd[p] > 1)
                return dp[i] = 2;
        }
    }

    return dp[i] = resp;
}

int main()
{
    int n;
    string aux;
    char c;

    memset(dp, -1, sizeof(dp));

    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
    {
        cin >> aux >> c;

        mx = max(mx, (int)aux.size());
        cod[c] = aux;
        decod[aux] = c;
        qtd[aux]++;
    }

    cin >> aux;
    string cd = "";
    for (int i = 0; aux[i]; i++)
        cd += cod[aux[i]];

    if (pd(cd, 0) == 1)
        printf("No\n");
    else
        printf("Yes\n");

    return 0;
}
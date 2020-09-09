#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, L, C;
    string w;
    while (scanf(" %d %d %d", &N, &L, &C) != EOF)
    {
        int linha = 0, total = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> w;
            int t = w.length();
            if (linha + t > C)
            {
                total++;
                linha = w.length() + 1;
            }
            else if (linha + t == C)
            {
                total++;
                linha = 0;
            }
            else
            {
                linha += w.length() + 1;
            }
        }
        if (linha != 0)
            total++;

        int pg = ceil(total / (float)L);
        cout << pg << endl;
    }
    return 0;
}
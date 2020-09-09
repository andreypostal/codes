#include <bits/stdc++.h>

using namespace std;

queue<pair<int, int>> pq;

int main()
{
    int n, h, m, c;
    while (scanf(" %d", &n) != EOF)
    {
        while (n--)
        {
            scanf(" %d %d %d", &h, &m, &c);
            int tt = h * 60 + c + m;
            pq.push(make_pair(tt, h * 60 + m));
        }

        int total = 0, tempo = 420;

        while (!pq.empty())
        {
            pair<int, int> atual = pq.front();
            pq.pop();

            int h = atual.second / 60;
            int m = atual.second - (h * 60);

            int novoTempo;
            if (m > 0 && m < 30)
                novoTempo = h * 60 + 30;
            else if (m > 30)
                novoTempo = (h + 1) * 60;

            if (m == 0)
                novoTempo = h * 60;
            if (m == 30)
                novoTempo = h * 60 + 30;

            tempo = max(novoTempo, tempo);

            if (atual.first < tempo)
                total++;

            tempo += 30;

            //cout << atual.second << " ate " << atual.first << " foi " << tempo << endl;
        }

        printf("%d\n", total);
    }

    return 0;
}
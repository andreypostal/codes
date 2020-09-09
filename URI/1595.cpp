#include <bits/stdc++.h>

using namespace std;

priority_queue<int, vector<int>, greater<int>> vel;

int main()
{
    int t, m, c, r, aux;
    scanf(" %d", &t);
    while (t--)
    {
        scanf(" %d %d %d", &m, &c, &r);
        for (int i = 0; i < m; i++)
        {
            scanf(" %d", &aux);
            vel.push(aux);
        }

        double tempo = 0;

        for (int i = 0; i < c; i++)
        {
            int a = vel.top();
            tempo += 1. / (a + r);
            vel.pop();
        }

        while (!vel.empty())
        {
            int a = vel.top();
            tempo += 1. / a;
            vel.pop();
        }

        printf("%.2f\n", tempo);
    }
    return 0;
}
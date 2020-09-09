#include <bits/stdc++.h>

using namespace std;

vector<int> graf[100100];
bool v[100100];

priority_queue<int> p;

int busca(int i)
{
    int maior = 0;
    for (int a : graf[i])
    {
        int r = busca(a);
        if (maior)
            p.push(min(r, maior));
        maior = max(r, maior);
    }

    return maior + 1;
}

int main()
{
    int n, k, a;
    scanf(" %d %d", &n, &k);
    vector<int> mf(n);

    for (int i = 2; i <= n; i++)
    {
        scanf(" %d", &a);
        graf[a].push_back(i);
    }

    int sum = busca(1);

    for (int i = 1; i < k; i++)
    {
        sum += p.top();
        p.pop();
    }

    printf("%d\n", sum);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int N, notas[105], aux;

int main()
{

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> aux;
        notas[aux]++;
    }

    int res = 0, n = 0;
    for (int i = 0; i < 102; i++)
    {
        if (notas[i] >= n)
        {
            res = i;
            n = notas[i];
        }
    }

    cout << res << endl;

    return 0;
}

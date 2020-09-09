#include <bits/stdc++.h>

using namespace std;

int figurinhas[150];

int main()
{
    int N, M, aux;
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> aux;
        if (figurinhas[aux] == 0)
        {
            figurinhas[aux]++;
            N--;
        }
    }

    cout << N << endl;

    return 0;
}
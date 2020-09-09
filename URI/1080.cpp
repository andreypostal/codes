#include <bits/stdc++.h>

using namespace std;

int main()
{
    int aux, maior = 0, pos;
    for (int i = 1; i <= 100; i++)
    {
        scanf("%d", &aux);
        if (aux > maior)
        {
            maior = aux;
            pos = i;
        }
    }
    cout << maior << endl
         << pos << endl;
    return 0;
}
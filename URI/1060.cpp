#include <bits/stdc++.h>

#define SIZE 400000

using namespace std;

int main()
{
    float n1, n2, n3, n4, n5, n6;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
    int total = 0;
    if (n1 > 0)
        total++;
    if (n2 > 0)
        total++;
    if (n3 > 0)
        total++;
    if (n4 > 0)
        total++;
    if (n5 > 0)
        total++;
    if (n6 > 0)
        total++;

    cout << total << " valores positivos" << endl;

    return 0;
}
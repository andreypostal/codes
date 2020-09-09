#include <bits/stdc++.h>

using namespace std;

int main()
{
    float f, f1;
    cin >> f >> f1;

    if (f1 <= 2)
        cout << "nova";
    else if (f1 > 2 && f1 < 97 && f <= f1)
        cout << "crescente";
    else if (f1 > 2 && f1 < 97 && f > f1)
        cout << "minguante";
    else if (f1 >= 97)
        cout << "cheia";

    cout << endl;
    return 0;
}

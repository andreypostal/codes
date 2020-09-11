#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t1, t2, t3;
    cin >> t1 >> t2 >> t3;

    if ((t1 > t2 && t2 <= t3) || (t1 < t2 && t2 < t3 && (t3 - t2) >= (t2 - t1)) || (t1 > t2 && t2 > t3 && (t2 - t3) < (t1 - t2)) || (t1 == t2 && t2 < t3))
        cout << ":)\n";
    else
        cout << ":(\n";

    //if (t2 > t1 && t2 >= t3 || (t1 < t2 && t2 < t3 && (t3 - t2) >= (t2 - t1)) || (t1 > t2 && t2 > t3 && (t2 - t3) >= (t1 - t2)))

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h, c, l;
    while (scanf(" %d %d %d %d", &n, &h, &c, &l) != EOF)
    {
        //cout << n << " " << h << "  " << c << " " << l << endl;
        float hp = (float)sqrt((float)(h * h + c * c));
        printf("%.4f\n", (hp * (float)l * (float)n) / 10000.0);
    }

    return 0;
}
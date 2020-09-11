#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ll n, ans;
        cin >> n;
        ans = n;
        for (ll i = 2; i * i <= n; i++)
        {
            int e = 0;
            while (n % i == 0)
            {
                n /= i;
                e++;
            }
            if (e % 2)
                ans *= i;
        }

        if (n > 1)
            ans *= n;

        printf("Caso #%d: %lld\n", t, ans);
    }
    return 0;
}
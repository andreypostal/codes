#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (scanf(" %d", &n) && n)
    {
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            scanf(" %lld", &a[i]);

        sort(a.begin(), a.end());
        long long ans = -1;
        long long ant = -1;
        long long cnt = 0;
        for (int i = 0; i < n && ans == -1; i++)
        {
            //cout << "ATUAL " << a[i] << " " << ant << " " << cnt << endl;
            if (a[i] == ant)
                cnt++;
            else
            {
                if (i)
                    if (cnt % 2)
                        ans = i - 1;

                cnt = 1;
            }

            ant = a[i];
        }

        if (ans == -1)
            ans = n - 1;

        //cout << ans << endl;

        printf("%lld\n", a[ans]);
    }
    return 0;
}
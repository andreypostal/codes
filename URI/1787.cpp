#include <bits/stdc++.h>

using namespace std;

bool isPowerOfTwo(long long int n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    int n;
    while (scanf(" %d", &n) && n)
    {
        long long int u, r, i, ptu = 0, ptr = 0, pti = 0;

        for (int j = 0; j < n; j++)
        {
            scanf(" %lld %lld %lld", &u, &r, &i);

            if (isPowerOfTwo(u))
            {
                ptu++;
                if (u > r && u > i)
                    ptu++;
            }
            if (isPowerOfTwo(r))
            {
                ptr++;
                if (r > u && r > i)
                    ptr++;
            }
            if (isPowerOfTwo(i))
            {
                pti++;
                if (i > u && i > r)
                    pti++;
            }

            // cout << ptu << " " << ptr << " " << pti << endl;
        }
        if (ptr > ptu && ptr > pti)
            printf("Rita\n");
        else if (ptu > ptr && ptu > pti)
            printf("Uilton\n");
        else if (pti > ptr && pti > ptu)
            printf("Ingred\n");
        else
            printf("URI\n");
    }
    return 0;
}
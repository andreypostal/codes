#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    while (getline(cin, str))
    {
        int sz = str.size();
        int total = 0, n = 0, cnt = 0;

        for (int i = 0; i <= sz; i++)
        {
            if ((i == sz || (i + 1 == sz && str[i] == '.') || str[i] == ' ' || (str[i] == '.' && i + 1 < sz && str[i + 1] == ' ')) && cnt > 0)
            {
                total += cnt, n++;
            }
            else if (i < sz && ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) && cnt != -1)
                cnt++;
            else
                cnt = -1;

            if (i < sz && (str[i] == ' ' || (str[i] == '.' && (i + 1 == sz || str[i + 1] == ' '))))
                cnt = 0;
        }

        n = max(n, 1);
        int media = total / n;

        if (media <= 3)
            printf("250\n");
        else if (media <= 5)
            printf("500\n");
        else
            printf("1000\n");
    }
    return 0;
}
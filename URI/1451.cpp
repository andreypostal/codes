#include <bits/stdc++.h>

using namespace std;

list<string> l;

int main()
{
    char c, ch[100100], str[100100];

    while (scanf(" %s", &str) != EOF)
    {
        bool h = false;
        int j = 0;

        for (int i = 0; str[i] != '\0'; i++)
        {
            c = str[i];
            if (c == '[')
            {
                ch[j] = '\0';
                if (h)
                    l.push_front(ch);
                else
                    l.push_back(ch);

                j = 0;

                h = true;
            }
            else if (c == ']')
            {
                ch[j] = '\0';

                if (h)
                {
                    l.push_front(ch);
                }
                else
                    l.push_back(ch);

                h = false;
                j = 0;
            }
            else
            {
                ch[j] = c;
                j++;
            }
        }

        if (j > 0)
        {
            ch[j] = '\0';
            if (h)
                l.push_front(ch);
            else
                l.push_back(ch);
        }

        for (string a : l)
            cout << a;

        printf("\n");

        l.clear();
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

map<char, char> C;

int main()
{
    C['@'] = 'a';
    C['&'] = 'e';
    C['!'] = 'i';
    C['*'] = 'o';
    C['#'] = 'u';

    char c;
    while (scanf("%c", &c) != EOF)
    {
        if (C.count(c))
            c = C[c];

        putchar(c);
    }

    if (c != '\n')
        printf("\n");

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c, ant = 'a';
    while ((scanf("%c", &c)) != EOF)
    {
        switch (c)
        {
        case 'P':
            c = 'F';
            break;
        case 'S':
            c = 'F';
            break;
        case 'V':
            c = 'F';
            break;
        case 'X':
            c = 'F';
            break;
        case 'J':
            c = 'F';
            break;
        case 'B':
            c = 'F';
            break;
        case 'Z':
            c = 'F';
            break;
        case 'p':
            c = 'f';
            break;
        case 's':
            c = 'f';
            break;
        case 'v':
            c = 'f';
            break;
        case 'x':
            c = 'f';
            break;
        case 'j':
            c = 'f';
            break;
        case 'b':
            c = 'f';
            break;
        case 'z':
            c = 'f';
            break;
        }

        if ((ant != 'f' && ant != 'F') || (c != 'f' && c != 'F'))
            printf("%c", c);

        ant = c;
    }
    return 0;
}
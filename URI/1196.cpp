#include <bits/stdc++.h>

using namespace std;

map<char, char> C;

int main()
{
    C['W'] = 'Q';
    C['E'] = 'W';
    C['R'] = 'E';
    C['T'] = 'R';
    C['Y'] = 'T';
    C['U'] = 'Y';
    C['I'] = 'U';
    C['O'] = 'I';
    C['P'] = 'O';
    C['['] = 'P';
    C[']'] = '[';
    C['\\'] = ']';

    C['1'] = '`';
    C['2'] = '1';
    C['3'] = '2';
    C['4'] = '3';
    C['5'] = '4';
    C['6'] = '5';
    C['7'] = '6';
    C['8'] = '7';
    C['9'] = '8';
    C['0'] = '9';
    C['-'] = '0';
    C['='] = '-';

    C['S'] = 'A';
    C['D'] = 'S';
    C['F'] = 'D';
    C['G'] = 'F';
    C['H'] = 'G';
    C['J'] = 'H';
    C['K'] = 'J';
    C['L'] = 'K';
    C[';'] = 'L';
    C['\''] = ';';

    C['X'] = 'Z';
    C['C'] = 'X';
    C['V'] = 'C';
    C['B'] = 'V';
    C['N'] = 'B';
    C['M'] = 'N';
    C[','] = 'M';
    C['.'] = ',';
    C['/'] = '.';
    C['\0'] = '\0';
    C['\n'] = '\n';

    C[' '] = ' ';

    char c;
    while (true)
    {
        c = getchar();
        if (c == EOF)
            break;

        c = C[c];

        putchar(c);
    }

    return 0;
}
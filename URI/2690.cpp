#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();
    string s;
    char e[50];
    while (n--)
    {
        s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
        scanf(" %[^\n]", e);

        int sz = 50;
        int tm = -1;
        for (int i = 0; e[i] != '\0'; i++)
        {
            tm++;
            if (tm < 12)
            {
                switch (e[i])
                {
                case 'G':
                case 'Q':
                case 'a':
                case 'k':
                case 'u':
                {
                    s[tm] = '0';
                    break;
                }
                case 'I':
                case 'S':
                case 'b':
                case 'l':
                case 'v':
                    s[tm] = '1';
                    break;
                case 'E':
                case 'Y':
                case 'O':
                case 'c':
                case 'm':
                case 'w':
                    s[tm] = '2';
                    break;
                case 'F':
                case 'P':
                case 'Z':
                case 'd':
                case 'n':
                case 'x':
                    s[tm] = '3';
                    break;
                case 'J':
                case 'T':
                case 'e':
                case 'o':
                case 'y':
                    s[tm] = '4';
                    break;
                case 'D':
                case 'N':
                case 'X':
                case 'f':
                case 'p':
                case 'z':
                    s[tm] = '5';
                    break;
                case 'A':
                case 'K':
                case 'U':
                case 'g':
                case 'q':
                    s[tm] = '6';
                    break;
                case 'C':
                case 'M':
                case 'W':
                case 'h':
                case 'r':
                    s[tm] = '7';
                    break;
                case 'B':
                case 'L':
                case 'V':
                case 'i':
                case 's':
                    s[tm] = '8';
                    break;
                case 'H':
                case 'R':
                case 'j':
                case 't':
                    s[tm] = '9';
                    break;
                default:
                    tm--;
                }
            }
        }

        sz = s.length();
        for (int i = 0; s[i] != 'a'; i++)
            cout << s[i];

        cout << endl;
    }
    return 0;
}
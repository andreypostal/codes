#include <bits/stdc++.h>

using namespace std;

map<int, char> mp;

int OctalToDecimal(int octalNum)
{
    int decimalNum = 0, power = 0;
    int oNo = octalNum;
    while (octalNum != 0)
    {
        decimalNum += (octalNum % 10) * pow(8, power);
        ++power;
        octalNum /= 10;
    }

    return decimalNum;
}

int main()
{
    mp[129] = 'a';
    mp[130] = 'b';
    mp[131] = 'c';
    mp[132] = 'd';
    mp[133] = 'e';
    mp[134] = 'f';
    mp[135] = 'g';
    mp[136] = 'h';
    mp[137] = 'i';
    mp[145] = 'j';
    mp[146] = 'k';
    mp[147] = 'l';
    mp[148] = 'm';
    mp[149] = 'n';
    mp[150] = 'o';
    mp[151] = 'p';
    mp[152] = 'q';
    mp[153] = 'r';
    mp[162] = 's';
    mp[163] = 't';
    mp[164] = 'u';
    mp[165] = 'v';
    mp[166] = 'w';
    mp[167] = 'x';
    mp[168] = 'y';
    mp[169] = 'z';

    mp[193] = 'A';
    mp[194] = 'B';
    mp[195] = 'C';
    mp[196] = 'D';
    mp[197] = 'E';
    mp[198] = 'F';
    mp[199] = 'G';
    mp[200] = 'H';
    mp[201] = 'I';
    mp[209] = 'J';
    mp[210] = 'K';
    mp[211] = 'L';
    mp[212] = 'M';
    mp[213] = 'N';
    mp[214] = 'O';
    mp[215] = 'P';
    mp[216] = 'Q';
    mp[217] = 'R';
    mp[226] = 'S';
    mp[227] = 'T';
    mp[228] = 'U';
    mp[229] = 'V';
    mp[230] = 'W';
    mp[231] = 'X';
    mp[232] = 'Y';
    mp[233] = 'Z';

    mp[240] = '0';
    mp[241] = '1';
    mp[242] = '2';
    mp[243] = '3';
    mp[244] = '4';
    mp[245] = '5';
    mp[246] = '6';
    mp[247] = '7';
    mp[248] = '8';
    mp[249] = '9';

    mp[64] = ' ';

    string str;
    int n;
    while (getline(cin, str))
    {
        stringstream stream(str);
        while (stream >> n)
        {
            printf("%c", mp[OctalToDecimal(n)]);
        }
        putchar('\n');
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    for (int i = str.size() - 1; i >= 0; i--)
        printf("%c", str[i]);

    printf("\n");

    return 0;
}
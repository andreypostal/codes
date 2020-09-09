#include <bits/stdc++.h>

using namespace std;

int main()
{
    string w;
    char wa[100100];
    scanf("%s", wa);
    for (int i = 0; wa[i] != '\0'; i++)
    {
        w += toupper(wa[i]);
    }

    if (w.find("ZELDA") != string::npos)
        printf("Link Bolado\n");
    else
        printf("Link Tranquilo\n");
    return 0;
}
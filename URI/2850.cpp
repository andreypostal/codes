#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    while (getline(cin, str))
    {
        if (str == "esquerda")
            printf("ingles\n");
        else if (str == "direita")
            printf("frances\n");
        else if (str == "nenhuma")
            printf("portugues\n");
        else if (str == "as duas")
            printf("caiu\n");
    }
    return 0;
}
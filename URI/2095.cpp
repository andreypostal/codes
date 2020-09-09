#include <bits/stdc++.h>

using namespace std;

priority_queue<long long int> ex1;
priority_queue<long long int> ex2;

int main()
{
    int n;
    long int fc;
    scanf(" %d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %ld", &fc);
        ex1.push(fc);
    }

    for (int i = 0; i < n; i++)
    {
        scanf(" %ld", &fc);
        ex2.push(fc);
    }

    int total = 0;

    for (int i = 0; i < n; i++)
    {

        if (ex1.top() < ex2.top())
        {
            total++;
            ex2.pop();
        }

        ex1.pop();
    }

    printf("%d\n", total);

    return 0;
}
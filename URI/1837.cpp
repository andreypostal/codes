#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int c = a / b;
	if (abs(b) * abs(c) != abs(a))
	{
		if (c <= 0 && a < 0 && abs(a) - abs(b) != 0 && (a > 0 || b > 0))
			c--;
		if (c >= 0 && a < 0 && abs(a) - abs(b) != 0)
			c++;
	}
	int d = c * b;
	int e = a - d;
	if (abs(d) > abs(a))
	{
		e = abs(d) - abs(a);
	}

	cout << c << " " << e << endl;
	return 0;
}
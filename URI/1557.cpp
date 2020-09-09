#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n) && n != 0) {
    	int nmax = pow(2, 2 * n - 2);
    	string mx = to_string(nmax);
    	int sz = mx.size();

    	for(int i=0;i<n;i++) {
    		for(int j=i;j<n+i;j++) {
    			int res = pow(2, j);
    			string str = to_string(res);
    			string pr = "";
    			for(int k=0;k<(sz - str.size());k++)
    				pr += " ";
    			pr += str;
    			if(j != (n - 1) + i)
    				pr += " ";
    			else
    				pr += "\n";

    			cout << pr;
    		}
    	}
    	cout << endl;
    }
    return 0;
}
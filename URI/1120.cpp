#include <bits/stdc++.h>

using namespace std;

string str;

int main() {
	char n1;
	while(scanf("%c", &n1)) {
		getline(cin, str);
		if(str[1] == '0' && n1 == '0')
			break;

		while(true) {
			size_t f = str.find(n1);
			if(f == string::npos)
				break;
			str.replace(str.begin()+f, str.begin()+f+1, "");
		}
		string res = "";
		int n0 = 0;
		int teveD = 0;
    	for(int i=0;i<str.size();i++) {
    		if(str[i] >= '0' && str[i] <= '9') {
    			if(str[i] != '0' || teveD > 0) {
    				if(teveD == 0)
    					teveD++;
    				
	    			res += str[i];
	    			if(str[i] == '0')
	    				n0++;
    			}
    		}
    	}
    	if(res.size() == n0) {
    		cout << "0" << endl;
    	} else {
    		cout << res << endl;
    	}
	}
	return 0;
}
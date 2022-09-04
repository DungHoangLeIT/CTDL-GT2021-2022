#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int res = 0;
		int d[1000] = {0};
		for(int i = 0; i <= s.size(); i++){
			d[i] = 1;
			for(int j = 0; j <= s.size(); j++){
				if(s[i] >= s[j]) d[i] = max(d[i], d[j] + 1);
			}
			res = max(res, d[i]);
		}
		cout << res / 2 << endl;
	}
}

#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	int dem[10000] = {0};
	int res = 0;
	for(int i = 0; i <= s.size() - 1; i++){
		dem[s[i]]++;
		if(res < dem[s[i]]){
			res = dem[s[i]];
		}
	}
	if(res <= s.size() - res && s.size() % 2 ==0) cout << 1;
	else if(res <= (s.size() / 2 + 1) && s.size() % 2 == 1) cout << 1;
	else cout << -1;
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

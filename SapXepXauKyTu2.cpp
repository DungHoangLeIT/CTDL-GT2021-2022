#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int k;
		string s;
		cin >> k >> s;
		int dem[300] = {0};
		int Max = 0;
		for(int i = 0 ; i < s.size(); i++){
			dem[s[i]]++;
			if(Max < dem[s[i]]) Max = dem[s[i]];
		}
		if((Max - 1) * (k - 1)  > (s.size() - Max)) cout << -1;
		else cout << 1;
		cout << endl;
	}
}

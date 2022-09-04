#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> x;
		int xoa = 0, res = 0;
		for(int i = 0; i < s.size(); i++){
			if(x.size() == 0){
				x.push(s[i]);
			}
			else if(x.top() == '[' && s[i] == ']'){
				x.pop();
				xoa += 2;
			}
			else if(x.top() == ']' && s[i] == '['){
				res += x.size() + xoa;
				x.pop();
			}
			else if(s[i] == '['){
				x.push(s[i]);
			}
			else if(x.top() == ']' && s[i] == ']'){
				x.push(s[i]);
			}
			if(x.size() == 0) xoa = 0;
		}
		cout << res << endl;
	}
}




















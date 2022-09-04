#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int s, d;
		cin >> s >> d;
		stack<int> x;
		while(s > 0){
			d--;
			if(s > 9){
				x.push(9);
				s -= 9;
			}
			else{
				x.push(s);
				break;
			}
		}
		if(d < 0) cout << -1;
		else{
			if(d > 0){
				int so = x.top();
				x.pop();
				x.push(so - 1);
				while(d > 1){
					x.push(0);
					d--;
				}
				x.push(1);
			}
		}
		while(x.size() > 0){
			cout << x.top();
			x.pop();
		}
		cout << endl;
	}
}





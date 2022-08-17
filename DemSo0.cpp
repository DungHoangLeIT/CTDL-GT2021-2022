#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 5], b[n + 5];
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
			b[i] = 0;
		}
		int ok = 0;
		for(int i = 1; i <= n; i++){
			if(a[i] != b[i]){
				ok = 1;
				cout << i - 1 << endl;
				break;
			}
		}
		if(ok == 0) cout << n << endl;
	}
}

#include<bits/stdc++.h>
using namespace std;

void solve(){
	bool ok = true;
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b.begin(), b.end());
	for(int i = 0; i < n; i++){
		if(b[i] != a[i] && a[i] != b[n - i -1]){
			ok = false;
			break;
		}
	}
	if(ok) cout << "YES";
	else cout << "NO";
	cout << endl;
}

main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

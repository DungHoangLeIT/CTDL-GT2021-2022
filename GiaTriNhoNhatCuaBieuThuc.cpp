#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 5], b[n + 5];
		for(int i = 1; i <= n; i++) cin >> a[i];
		for(int i = 1; i <= n; i++) cin >> b[i];
		sort(a + 1, a + n + 1);
		sort(b + 1, b + n + 1);
		long long res = 0;
		for(int i = 1; i <= n; i++){
			res += a[i] * b[n -i + 1];
		}
		cout << res << endl;
	}
}

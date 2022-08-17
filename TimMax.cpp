#include<bits/stdc++.h>
using namespace std;

const int Mod = 1e9 + 7;

main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 5];
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a + 1, a + n + 1);
		long long res = 0;
		for(int i = 1; i <= n; i++){
			res += ((a[i] % Mod) * ((i - 1) % Mod));
			res %= Mod;
		}
		cout << res << endl;
	}
}

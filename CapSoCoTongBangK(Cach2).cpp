#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n + 5];
		map<int, int> mp;
		for(int i = 1; i <= n; i++ ){
			cin >> a[i];
			mp[a[i]]++;
		}
		long long res = 0;
		for(int i = 1; i <= n; i++){
			res += mp[k - a[i]];
			if(a[i] * 2 == k){
				--res;
			}
		}
		cout << res / 2 << endl;
	}
}


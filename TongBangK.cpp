#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n + 5];
		long long d[k + 5] = {0};
		d[0] = 1;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 1; i <= k; i++){
			for(int j = 0; j < n; j++){
				if(i >= a[j]) d[i] = (d[i] + d[i- a[j]]) % mod;
			}
		}
		cout << d[k] << endl;
	}
}

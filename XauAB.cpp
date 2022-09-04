#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n + 5];
		for(int i = 1; i <= n; i++) cin >> a[i];
		for(int i = 1; i <= n - k + 1; i++){
			int res = 0;
			for(int j = i; j <= i + k - 1; j++){
				res = max(res, a[j]);
			}
			cout << res << " ";
		}
		cout << endl;
	}
}
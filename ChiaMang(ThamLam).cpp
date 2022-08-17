#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, val;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n + 5];
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a + 1, a + n + 1);
		int x = min(k, n - k);
		int sum1 = 0, sum2 = 0;
		for(int i = 1; i <= x; i++){
			sum1 += a[i];
		}
		for(int i = x + 1; i <= n; i++){
			sum2 += a[i];
		}
		cout << sum2 - sum1 << endl;
	}
}


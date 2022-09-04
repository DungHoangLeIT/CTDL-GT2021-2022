#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 5];
		for(int i = 1; i <= n; i++) cin >> a[i];
		int res = 0;
		int d[1005] = {0};
		for(int i = 1; i <= n; i++){
			d[i] = 1;
			for(int j = 1; j < i; j++){
				if(a[i] >= a[j]) d[i] = max(d[i], d[j] + 1);
			res = max(res, d[i]);
			}
		}
		cout << n - res << endl;
	}
}

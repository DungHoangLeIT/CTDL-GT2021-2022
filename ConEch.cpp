#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n;
		k = 3;
		long long d[n + 5] = {0};
		d[0] = d[1] = 1;
		for(int i = 2; i <= n; i++){
			for(int j = 1; j <= min(i, k); j++){
				d[i] +=d[i - j];
				//d[i] %= mod;
			}
		}
		cout << d[n] << endl;
	}
}

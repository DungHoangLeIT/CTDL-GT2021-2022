#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a, d[n + 5][k];
		d[0][0] = 0;
		for(int i = 1; i < k; i++){
			d[0][i] = -1005;
		}
		for(int i = 1; i <= n; i++){
			cin >> a;
			a %= k;
			for(int j = 0; j < k; j++){
				d[i][j] = max(d[i - 1][j], d[i - 1][(j + k - a)%k] + 1);
			}
		}
		cout << d[n][0] << endl;
	}
}

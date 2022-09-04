#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
long long d[1005][1005];
int main(){
	for(int i = 0; i <= 1000; i++){
		for(int j = 0; j <= i; j++){
			if(i == j || j == 0) d[i][j] = 1;
			else d[i][j] = d[i -1][j - 1] + d[i - 1][j];
			d[i][j] %= mod;
		}
	}
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		cout << d[n][k] << endl;
	}
}

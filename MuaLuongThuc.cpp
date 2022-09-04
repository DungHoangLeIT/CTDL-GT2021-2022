#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, s, m;
	cin >> n >> s >> m;
	if( m * s > (s - s/7) * n) cout << -1 << endl;
	else{
		for(int i = 1; i <= s - s/7; i++){
			if(i * n >= s * m ){
				cout << i <<endl;
				break;
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

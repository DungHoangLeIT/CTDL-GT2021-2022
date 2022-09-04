#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
long long f[105][10] = {};

void init() {
    for(int i = 0; i <= 9 ; i++ ) {
        f[1][i] = 1;
    }
    for(int i = 2 ; i <= 100; i++ ) {
        for(int j = 0 ; j <= 9 ; j++ ) {
            for(int k = 0 ; k <= j ; k++ ) {
                f[i][j] += f[i-1][k];
                f[i][j] %= MOD;
            }
        }
    }
}
void solve() {
	int n;
    cin >> n;
    long long ans = 0;
    for(int i = 0; i <= 9; i++) {
        ans += f[n][i];
        ans %= MOD;
    }
    cout << ans << endl;
}

int main(){
    init();
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}


#include <bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

void solve() {
	int n; LL ans = -inf;
	cin >> n;
	LL a[n+5] = {},f[n+5] = {};
	FOR(i,1,n) {
		cin >> a[i];
	}
	f[1] = a[1];
	ans = f[1];
	FOR(i,2,n) {
		FO(j,0,i) {
			if( a[i] > a[j] ) {
				f[i] = max(f[i],f[j]+a[i]);
			}
		}
		ans = max(ans,f[i]);
	}
	cout << ans << endl;
}	

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
 

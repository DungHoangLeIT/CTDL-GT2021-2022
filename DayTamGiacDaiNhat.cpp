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
	LL n;
	cin >> n;
	LL a[n+5];
	FOR(i,1,n) {
		cin >> a[i];
	}
	LL l[n+5] = {}, r[n+5] = {};
	l[1] = 1;
	r[n] = 1;
	FOR(i,2,n) {
		if( a[i] > a[i-1] ) {
			l[i] = l[i-1] + 1;
		}
		else l[i] =1;
	}
	FORD(i,n-1,1) {
		if( a[i] > a[i+1] ) {
			r[i] = r[i+1] + 1;
		}
		else r[i] = 1;
	}
	LL ans = 0;
	FOR(i,1,n) {
		ans = max(ans,l[i]+r[i]-1);
	}
	cout << ans << endl;
}

int main(){
   ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}

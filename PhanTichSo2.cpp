#include <bits/stdc++.h>
using namespace std;
 
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
 
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
 
void FileIO(){
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
}
 
vector<vi> res;
int n,a[100],k;
 
void inp(){
	cin>>n;
	res.clear();
}
 
void ql(int sum, int pos,int cnt){
	if(sum==n){
		vi tmp(a,a+cnt);
		res.pb(tmp);
		return;
	}
	for(int j = pos;j>=1;j--){
		if(sum+j<=n){
			a[cnt] = j;
			ql(sum+j,j,cnt+1);
		}
	}
}
 
 
int main(){
	//FileIO();
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;cin>>t;
	while(t--){
		inp();
		ql(0,n,0);
		cout<<res.size()<<endl;
		for(auto it : res){
			cout<<"(";
			for(int i = 0; i<it.size();i++){
				cout<<it[i];
				cout<<(i==it.size()-1 ? ") " : " ");
			}
		}
		cout<<"\n";
	}
}

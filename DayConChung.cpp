#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,k;
		cin >> n >> m >> k;
		int a[n + 1], b[m + 1], c[k + 1];
		for(int i = 1; i <= n; i++) cin >> a[i];
		for(int i = 1; i <= m; i++) cin >> b[i];
		for(int i = 1; i <= k; i++) cin >> c[i];
		vector<int> v;
		int i = 1, j = 1, o = 1;
		while(i <= n && j <= m && o <= k){
			if(a[i] == b[j] && b[j] == c[o]){
				v.push_back(a[i]);
				i++;
				j++;
				o++;
			}
			else{
				long long Max = max({a[i],b[j],c[o]});
				if(a[i] < Max) i++;
				if(b[j] < Max) j++;
				if(c[o] < Max) o++;
			}
		}
		if(v.size() == 0) cout << "NO";
		else for(auto x : v) cout << x << " ";
		cout << endl;
	}
}

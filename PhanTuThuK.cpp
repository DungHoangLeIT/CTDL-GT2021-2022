#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		cin >> m >> n >> k;
		vector<int> a(m + n);
		int a;
		for(int i = 0; i < m + n; i++){
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		cout << a[k - 1];
	}
}

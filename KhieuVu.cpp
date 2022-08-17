#include<bits/stdc++.h>
using namespace std;

int solve(){
	int n, m;
	cin >> n >> m;
	int a[n + 5], b[m + 5];
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= m; i++) cin >> b[i];
	sort(a + 1, a + n + 1);
	sort(b + 1, b + m + 1);
	int i = 1;
	int j = 1;
	int cnt = 0;
	while(i <= n && j <= m){
		if(a[i] <= b[j]){
			i++;
		}
		else{
			cnt++;
			i++;
			j++;
		}
	}
	cout << cnt;
}

int main(){
	solve();
}

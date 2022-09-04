#include<bits/stdc++.h>
using namespace std;

int n, s, a[100], x[100], ok;
bool used[100];

void ktao(){
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		s += a[i];
	}
	sort(a, a + n + 1);
	used[100] = false;
	ok = 0;
}

void Try(int i, int k, int sum){
	if(sum < s){
		if(sum == s - sum) ok = 1;
	}
	for(int j = i; j <= n; j++){
		if(!used[j] && sum + a[j] <= s){
			used[j] = true;
			x[k] = a[j];
			Try(j, k + 1, sum + a[j]);
			used[j] = false;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ktao();
		Try(1, 1, 0);
		if(ok == 1) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}

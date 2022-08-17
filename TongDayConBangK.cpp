#include<bits/stdc++.h>
using namespace std;

int n, s, a[100], x[100], cnt;
bool used[100];

void ktao(){
	cin >> n >> s;
	for(int i = 1; i <= n; i++) cin >> a[i];
	//sort(a + 1, a + n + 1);
	cnt = 0;
	used[100] = false;
}

void Try(int i, int k, int sum){
	if(sum == s){
		cnt++;
		for(int i = 1; i < k; i++) cout << x[i] << " ";
		cout << endl;
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
	ktao();
	Try(1, 1 ,0);
	cout << cnt;
}

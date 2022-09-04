#include<bits/stdc++.h>
using namespace std;

long long n, m, a[1000], b[1000], ok;
bool used[1000];

void ktao(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= m; i++) cin >> b[i];
	used[1000] = false;
}
void Try(int i,int k,int sum){
	if(sum == b[k]) {
		ok = 1;
	}
	for(int j = i; j <= n; j++){
		if(!used[j] && a[j] + sum <= b[k]){
			used[j] = true;
			Try(j, k ,sum + a[j]);
			used[j] = false;
		}
	}
}

int main(){
	ktao();
	for(int k = 1; k <= m; k++){
		ok = 0;
		Try(1, k ,0);
		cout << ok;
	}
}

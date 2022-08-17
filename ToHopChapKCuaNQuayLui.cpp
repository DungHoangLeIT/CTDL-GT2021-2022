#include<bits/stdc++.h>
using namespace std;

int n, k, s, a[10005], cnt;

int ktra(int a[], int k, int s){
	int tong = 0;
	for(int i = 1; i <= k; i++){
		tong += a[i];
	}
	if(tong == s) return 1;
	return 0;
}

void init(){
	for(int i = 1; i <= k; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
void Try(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k){
			if(ktra(a, k, s)) cnt++;
		}
		else Try(i + 1);
	}
}

int main(){
	int t = 100;
	while(t--){
		cnt = 0;
		cin >> n >> k >> s;
		if(n == k && k == s && s == 0) return 0;
		Try(1);
		cout << cnt;
		cout << endl;
	}
}

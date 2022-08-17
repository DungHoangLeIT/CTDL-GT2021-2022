#include<bits/stdc++.h>
using namespace std;

int n, k, a[1000], ok;

void ktao(){
	for(int i =  1; i <= n; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i] = 1;
	}
}

int ktra(int n, int a[], int k){
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == 1) cnt ++;
	}
	if(cnt == k) return 1;
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n  >> k;
		ktao();
		ok = 1;
		while(ok){
			if(ktra(n, a, k)) {
				for(int i = 1; i <= n ; i++){
					cout<<a[i];
				}
				cout<<endl;
			}
			sinh();
		}
	}
}

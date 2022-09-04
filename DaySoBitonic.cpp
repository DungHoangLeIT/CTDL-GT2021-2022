#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[1000];
		int d1[1000], d2[1000];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			d1[i] = a[i];
			d2[i] = a[i];
		}
		for(int i = 1; i < n; i++){
			for(int j = 1; j < i; j++){
				if(a[i] > a[j]){
					d1[i] = max(d1[i], d1[j] + a[i]);
				}
			}
		}
		for(int i = n - 1; i >= 0; i--){
			for(int j = n; j > i; j--){
				if(a[i] > a[j]){
					d2[i] = max(d2[i], d2[j] + a[i]);
				}
			}
		}
		int res = 0;
		for(int i = 1; i <= n; i++){
			res = max(res, d1[i] + d2[i] - a[i]);
		}
		cout << res << endl;
	}
}

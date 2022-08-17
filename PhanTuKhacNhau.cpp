#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 5], b[n + 5];
		for(int i = 1; i <= n; i++) cin >> a[i];
		for(int i = 1; i <= n - 1; i ++) cin >> b[i];
		for(int i = 1; i <= n -1; i++){
			if(a[i] != b[i]){
				cout << i << endl;
				break;
			}
		}
	}
}

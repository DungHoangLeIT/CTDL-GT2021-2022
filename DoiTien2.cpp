#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {1000,500,200,100,50,20,10,5,2,1};
	int n = 10;
	int t;
	cin >> t;
	while(t--){
		int k, cnt = 0;
		cin >> k;
		for(int i = 0; i < n; i++){
			cnt += k / a[i];
			k %= a[i];
		}
		cout << cnt << endl;
	}
}
